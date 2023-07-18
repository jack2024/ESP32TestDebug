#include <Arduino.h>

byte count;
void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(32, OUTPUT);
  Serial.begin(115200);
}

// the loop function runs over and over again forever
void loop()
{
  digitalWrite(32, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(250);             // wait for a second
  digitalWrite(32, LOW);  // turn the LED off by making the voltage LOW
  delay(250);             // wait for a second
  count++;
  Serial.println(count);
}