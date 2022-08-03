#ifndef L298N_H
#define L298N_H
#include <Arduino.h>

class L298N{
    public:
        int enablePin;
        int in1;
        int in2; 
        L298N(int,int,int);
        void on();
        void off();
        void forward();
        void backward();
        void left();
        void right();
        void speed(int);
                
};
#endif