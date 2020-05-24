#include <Arduino.h>

int d1 = 0;

void setup() {
  pinMode(D0, OUTPUT);
  pinMode(D1, INPUT);
}

void loop() {
  d1 = digitalRead(D1);
  digitalWrite(D0, d1);
}