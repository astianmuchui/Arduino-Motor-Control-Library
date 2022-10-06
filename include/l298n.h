#ifndef L298N_H
#define L298N_H
#include <Arduino.h>

class L298N{
    public:
        int enablePin;
        int in1;
        int in2;
        int motorSpeed;
        int enablePin;
        L298N::L298N(int,int,int,float);
        void on();
        void off();
        void forward();
        void backward();
        float setSpeed(float n);
        float readSpeed();
        void left();
        void right();
        bool isOn();
        bool isOff();
        void speed(int);

};
#endif
