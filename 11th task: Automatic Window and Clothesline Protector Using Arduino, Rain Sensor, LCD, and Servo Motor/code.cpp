#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo windowServo;

// Pin Definitions
const int rainSensor = A0;
const int servoPin = 9;

// Adjust according to your sensor
const int threshold = 500;

void setup() {
  lcd.init();
  lcd.backlight();

  windowServo.attach(servoPin);
  windowServo.write(0); // Window Open

  lcd.setCursor(0,0);
  lcd.print("Window System");
  delay(2000);
  lcd.clear();
}

void loop() {

  int rainValue = analogRead(rainSensor);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Rain:");
  lcd.print(rainValue);

  if(rainValue < threshold)
  {
    // Rain Detected
    windowServo.write(90);   // Close Window

    lcd.setCursor(0,1);
    lcd.print("Window Closed");
  }
  else
  {
    // No Rain
    windowServo.write(0);    // Open Window

    lcd.setCursor(0,1);
    lcd.print("Window Open");
  }

  delay(500);
}
