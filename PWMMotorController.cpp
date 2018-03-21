//
//  PWMMotorController.cpp
//  
//
//  Created by Orian Leitersdorf on 3/21/18.
//

#include "PWMMotorController.hpp"
#include "Arduino.h"

/* Creates the Servo object used to communicate */
PWMMotorController::PWMMotorController (int pin){
    _output.attach(pin);
}

/* Sets a speed using the servo as output */
void PWMMotorController::set(double speed){
    /* Translates range of [-1 to 1] to [-90 to 90] */
    _output.write (speed * 90 + 90);
}
