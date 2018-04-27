//
//  PWMMotorController.hpp
//
//  Enables control of PWM enabled
//  SpeedController for Arduino
//
//  Created by Orian Leitersdorf on 3/21/18.
//

#ifndef PWMMotorController_hpp
#define PWMMotorController_hpp

#include <stdio.h>

#include "Arduino.h"
#include <Servo.h>

/*
Enables control of PWM enabled
SpeedController for Arduino
 
 Note: Servo object is only attached when first value is set
 
 */
class PWMMotorController
{
    
    public:
    
        /* Initializes the controller on a pwm pin */
        PWMMotorController (int pin);
    
        /*
        Sets the output of the controller from
        -1 (max reverse), 0 (stop), to 1 (max forward)
         */
        void set (double speed);
    
    private:
        /* The pin the servo is connected to */
        int _pin;
        /* The servo object used to send signals */
        Servo _output;
    
};

#endif /* PWMMotorController_hpp */
