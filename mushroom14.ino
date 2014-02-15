/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  This example code is in the public domain.
 */

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int mist = 1;
int fan = 2;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(mist, OUTPUT);
    pinMode(fan, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(mist, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(fan, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000000);               // wait for a second
  digitalWrite(mist, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(fan, LOW);    // turn the LED off by making the voltage LOW
  delay(2000);               // wait for a second
}
