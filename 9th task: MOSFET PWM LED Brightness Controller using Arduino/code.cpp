const int ledPin = 9;   // PWM pin connected to MOSFET gate

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {

  // Fade In
  for (int i = 0; i <= 255; i++) {
    analogWrite(ledPin, i);
    delay(10);
  }

  // Fade Out
  for (int i = 255; i >= 0; i--) {
    analogWrite(ledPin, i);
    delay(10);
  }

}
