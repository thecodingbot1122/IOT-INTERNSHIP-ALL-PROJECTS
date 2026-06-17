#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

const int phPin = A0;

// Your calibration (given)
float getPH(int sensorValue) {
  float pH = (614.0 - sensorValue) * 14.0 / 614.0;

  if (pH < 0) pH = 0;
  if (pH > 14) pH = 14;

  return pH;
}

void setup() {
  Serial.begin(9600);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED not found");
    while (1);
  }

  display.clearDisplay();
}

void loop() {

  int sensorValue = analogRead(phPin);
  float pH = getPH(sensorValue);

  String status;

  if (pH >= 6.5 && pH <= 8.5) {
    status = "SAFE WATER";
  } else {
    status = "UNSAFE WATER";
  }

  // Serial Monitor
  Serial.print("pH: ");
  Serial.print(pH);
  Serial.print(" | ");
  Serial.println(status);

  // OLED Display
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);

  display.setCursor(0, 0);
  display.print("Water Quality Monitor");

  display.setCursor(0, 20);
  display.print("pH Value: ");
  display.print(pH, 2);

  display.setCursor(0, 40);
  display.print(status);

  display.display();

  delay(1000);
}
