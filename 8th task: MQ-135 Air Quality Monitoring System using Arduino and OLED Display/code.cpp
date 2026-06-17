#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

const int mqPin = A0;

void setup() {
  Serial.begin(9600);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED not found");
    while (1);
  }

  display.clearDisplay();
}

void loop() {

  int airValue = analogRead(mqPin);

  String status;

  if (airValue <= 300) {
    status = "GOOD AIR 😊";
  }
  else if (airValue <= 600) {
    status = "MODERATE ⚠️";
  }
  else {
    status = "BAD AIR ☠️";
  }

  // Serial Monitor
  Serial.print("Air Value: ");
  Serial.print(airValue);
  Serial.print(" | Status: ");
  Serial.println(status);

  // OLED Display
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);

  display.setCursor(0, 0);
  display.print("Air Quality Monitor");

  display.setCursor(0, 20);
  display.print("Value: ");
  display.print(airValue);

  display.setCursor(0, 40);
  display.print(status);

  display.display();

  delay(1000);
}
