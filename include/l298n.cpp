#include <l298n.h>

L298N::L298N(int a, int b,int c){
    this->enablePin = a;
    this->in1 = b;
    this->in2 = c;
    int enable_pins[3] = {a,b,c};
    for(int pin = 0; pin<3; pin++){
        pinMode(enable_pins[pin],OUTPUT);
    }    
};

void L298N::on(){
    digitalWrite(this->enablePin,HIGH);
};

void L298N::off(){
    digitalWrite(this->enablePin,LOW);
};

void L298N::forward(){
    digitalWrite(this->in1, HIGH); 
    digitalWrite(this->in2, LOW);
}

void L298N::backward(){
    digitalWrite(this->in1, LOW); 
    digitalWrite(this->in2, HIGH);
}
