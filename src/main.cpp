#include <Arduino.h>
#include <l298n.h>
// Example
L298N rightMotor(19,14,5,50);
L298N leftMotor(12,13,16,50);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
    rightMotor.on();
    rightMotor.forward();
    leftMotor.on();
    leftMotor.forward();
}
