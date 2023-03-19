#include <Arduino.h>
#include <Blynk.h>

BLYNK_WRITE (V1) {

}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);
  //devbranch
}