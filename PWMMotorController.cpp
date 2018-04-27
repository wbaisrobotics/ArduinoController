//
//  PWMMotorController.cpp
//  
//
//  Created by Orian Leitersdorf on 3/21/18.
//

#include "PWMMotorController.hpp"
#include "Arduino.h"

/* Stores the pin */
PWMMotorController::PWMMotorController (int pin){
    // Store the pin connected to
    _pin = pin;
}

/* Sets a speed using the servo as output */
void PWMMotorController::set(double speed){
    // If servo not attached yet, attach
    if (!_output.attached()){
        _output.attach(_pin);
    }
    /* Translates range of [-1 to 1] to [0 to 180] */
    _output.write (speed * 90 + 90);
}
