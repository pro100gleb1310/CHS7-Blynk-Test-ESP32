#include <Arduino.h>
int a = 0;

#define CLK 2
#define DIO 3

#include "GyverTM1637.h"
GyverTM1637 disp(CLK, DIO);




void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  //devcommit2
  Serial.println(a);
  a++;
  delay(5000);


}