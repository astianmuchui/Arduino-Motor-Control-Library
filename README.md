# L298N Motor Control Library

# Introduction 
This is a small library for motor control using the L298N module. It makes it easier to control motors independently.

# Usage 
- Include the library source file. 

```c++ 
#include <Arduino.h>
#include <l298n.h>

```
- Create the L298N Object for each motor 
### Parameters
<table>
  <tr>
    <td>Parameter 1</td>
    <td>Parameter 2</td>
    <td>Parameter 3</td>
  <tr>
  
  <tr>
    <td>Enable Pin</td>
    <td>in1</td>
    <td>in2</td>
  <tr>
</table>

```c++
#include <Arduino.h>
#include <l298n.h>
L298N rightMotor(19,14,5);
L298N leftMotor(12,13,16);

```
- Call methods 

```c++
#include <Arduino.h>
#include <l298n.h>
// Example 

L298N rightMotor(19,14,5);
L298N leftMotor(12,13,16);

void setup() {
  // Setup is not required. Pinmode is already set
}

void loop() {
    rightMotor.forward();
    leftMotor.forward();
}
```

