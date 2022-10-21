#include <Arduino.h>
#include <Motor.h>

// Motor 1
// Use the included library
Motor motor1(6,8,9);
Motor motor2(7,10,11);
void setup(){
  Serial.begin(9600);

}
void loop(){
  motor1.forward(100);
  motor2.forward(100);
  delay(1000);
  motor1.off();
  motor2.off();
  delay(1000);
    // backward
  motor1.backward(100);
  motor2.backward(100);
  delay(1000);
  motor1.off();
  motor2.off();
}
