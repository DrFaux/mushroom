/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  This example code is in the public domain.
 */

#include "DHT.h"

#define DHTPIN 11     // what pin we're connected to
#define DHTTYPE DHT22   // DHT 22  (AM2302)

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int mist = 1;
int fan = 2;
DHT dht(DHTPIN, DHTTYPE);

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(mist, OUTPUT);
    pinMode(fan, OUTPUT);
}

#define CYCLE_PERIOD 60000 // total time of repeating cycle
#define ON_TIME 0.05 * CYCLE_PERIOD // a #define is just a search-and-replace thing

// the loop routine runs over and over again forever:
void loop() {
  unsigned long time = millis(); // find out current time and store it
  unsigned long cycle_time = time % CYCLE_PERIOD; // % gives the remainder of a division
  // cycle_time will be 0 to CYCLE_PERIOD, repeating
  if (cycle_time < ON_TIME) { // if true, we are within the percentage which is ON_TIME
    digitalWrite(mist, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(fan, HIGH);   // turn the LED on (HIGH is the voltage level)
  } else { // if we are in the other percentage of the CYCLE_PERIOD
    digitalWrite(mist, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(fan, LOW);    // turn the LED off by making the voltage LOW
  }
}
