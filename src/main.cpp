#include <Arduino.h>

#define LED_PIN LED_BUILTIN  // Built-in LED pin

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // Turn LED on
  delay(2000);                   // Wait 500 ms
  digitalWrite(LED_PIN, LOW);   // Turn LED off
  delay(2000);                   // Wait 500 ms
}
