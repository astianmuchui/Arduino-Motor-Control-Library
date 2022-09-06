### L298N Motor Control Library

#### Introduction 
This is a small library for motor control using the L298N module. It makes it easier to control motors independently.

# Usage 
- Include the source file. 

```c++ 
#include <Arduino.h>
#include <l298n.h>

```
- Create the L298N Object for each motor 
### Arguments for initialization
<table>
  <tr>
    <td>1</td>
    <td>2</td>
    <td>3</td>
  <tr>
  <tr>
    <td>Enable Pin A/B (PWM)</td>
    <td>in1/in3 (PWM)</td>
    <td>in2/in4 (PWM)</td>
  <tr>
</table>
```c++
#include <Arduino.h>
#include <l298n.h>
// The params have been discussed above
L298N rightMotor(19,14,5);
L298N leftMotor(12,13,16);

```
- Call methods 

```c++
#include <Arduino.h>
#include <l298n.h>

// Create Object
L298N rightMotor(19,14,5);
L298N leftMotor(12,13,16);

void setup() {
  // Setup is not required. 
 //Pinmode is already set
}

void loop() {
    rightMotor.forward();
    leftMotor.backward();
    delay(500);
    rightMotor.off();
    leftMotor.off();
}
```

