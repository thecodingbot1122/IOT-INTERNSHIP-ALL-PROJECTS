#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int ldrPin = A0;
const int ledPin = 9;

int ldrValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Street Light");
  lcd.setCursor(0, 1);
  lcd.print("System Ready");
  delay(2000);
  lcd.clear();
}

void loop() {

  ldrValue = analogRead(ldrPin);

  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("LDR:");
  lcd.print(ldrValue);

  lcd.setCursor(0, 1);

  // Change threshold according to your sensor readings
  if (ldrValue > 500) {
    digitalWrite(ledPin, HIGH);
    lcd.print("Light: ON ");
  }
  else {
    digitalWrite(ledPin, LOW);
    lcd.print("Light: OFF");
  }

  delay(500);
}
