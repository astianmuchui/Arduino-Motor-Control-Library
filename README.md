### Arduino Motor Control Library

#### Introduction
This is a small library for motor control  in arduino. It makes it easier to control motors independently.

# Usage
- Include the header file.

```c++
#include <Arduino.h>
#include <Motor.h>

```
- Create the L298N Object for each motor
### Arguments for initialization

```c++
// Instantiate object
Motor MyMotor(uint8_t enablePin,uint8_t input1,uint8_t input2);

```

```c++
#include <Arduino.h>
#include <Motor.h>
// The params have been discussed above
Motor rightMotor(19,14,5);
Motor leftMotor(12,13,16);
```
- Call methods


```c++
#include <Arduino.h>
#include <Motor.h>

// Create Object
Motor rightMotor(19,14,5);
Motor leftMotor(12,13,16);

void setup() {
  // Setup is not required.
 //Pinmode is already set
}

void loop() {
  // Param -> speed
    rightMotor.forward(50);
    leftMotor.backward(50);
    delay(500);
    rightMotor.off();
    leftMotor.off();
}
```

