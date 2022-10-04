#include <l298n.h>

L298N::L298N(int a, int b,int c,int d){
    this->enablePin = a;
    this->in1 = b;
    this->in2 = c;
    int enable_pins[3] = {a,b,c};
    for(int pin = 0; pin<3; pin++){
        pinMode(enable_pins[pin],OUTPUT);
    }
    // This function needs to be re-done

};

float L298N::setSpeed(float n){
    if(n == NULL){
        this->motorSpeed = 255;
    }else{
        this->motorSpeed = map(n,0,100,0,255);
        analogWrite(this->enablePin,this->motorSpeed);
    }
}

float L298N::readSpeed(){
    float speed = analogRead(this->enablePin);
    return speed;
}

bool L298N::isOn(){
    if((digitalRead(this->enablePin) == HIGH) || (analogRead(this->enablePin) > 0)){
        return true;
    }else{
        return false;
    }
}
bool L298N::isOff(){
    if(!isOn()){
        return true;
    }else{
        return false;
    }
}
void L298N::on(){
    if(isOn() == false){
        digitalWrite(this->enablePin,HIGH);
    }else{
        // Do nothing
    }
};
void L298N::off(){
    if(isOn()){
        digitalWrite(this->enablePin,LOW);
    }
};
void L298N::forward(){
    if(isOn()){
        digitalWrite(this->in1, HIGH);
        digitalWrite(this->in2, LOW);
    }else{
        // Turn on enable pin then move forward
        on();
        delay(100);
        forward();
    }
}
void L298N::backward(){
    if(isOn()){
        digitalWrite(this->in1, LOW);
        digitalWrite(this->in2, HIGH);
    }else{
        on();
        delay(100);
        backward();
    }
}
