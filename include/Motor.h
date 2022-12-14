/*
    Motor control library
    BY: SEBASTIAN MUCHUI
*/
#ifndef MOTOR_H
#define MOTOR_H
#include <Arduino.h>


class Motor{
    public:
        int enablePin;
        uint8_t in1;
        uint8_t in2;
        int motorSpeed;
    public:
        Motor(int a, int b,int c){
        this->enablePin = a;
        this->in1 = b;
        this->in2 = c;
        int enable_pins[3] = {a,b,c};
        for(int pin = 0; pin<3; pin++){
            pinMode(enable_pins[pin],OUTPUT);
        }

    };

    float setSpeed(float n){
    if(n == NULL){
        this->motorSpeed = 255;
    }else{
        this->motorSpeed = map(n,0,100,0,255);
        analogWrite(this->enablePin,this->motorSpeed);
    }
    }

    float readSpeed(){
    float speed = analogRead(this->enablePin);
    return speed;
    }
    bool isOn(){
    if((digitalRead(this->enablePin) == HIGH) || (analogRead(this->enablePin) > 0)){
        return true;
    }else{
        return false;
    }
    }
    bool isOff(){
    if(!isOn()){
        return true;
    }else{
        return false;
    }
    }
    void on(){
    if(isOn() == false){
        digitalWrite(this->enablePin,HIGH);
    }else{
        // Do nothing
    }
    };
    void off(){
    if(isOn()){
        digitalWrite(this->enablePin,LOW);
    }
    };
    void forward(float speed){
        Motor::setSpeed(speed);
    if(isOn()){
        digitalWrite(this->in1, HIGH);
        digitalWrite(this->in2, LOW);
    }else{
        // Turn on enable pin then move forward
        on();
        delay(100);
        forward(speed);
    }
    }
    void backward(float speed){
        Motor::setSpeed(speed);
    if(isOn()){
        digitalWrite(this->in1, LOW);
        digitalWrite(this->in2, HIGH);
    }else{
        on();
        delay(100);
        backward(speed);
    }
    }


};
#endif
