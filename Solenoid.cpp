//
//  Solenoid.cpp
//  
//
//  Created by Orian Leitersdorf on 3/21/18.
//

#include "Arduino.h"
#include "Solenoid.hpp"

/* Creates the solenoid object on a pin */
Solenoid::Solenoid (int pin){
    pinMode (pin, OUTPUT);
    _pin = pin;
    _state = false;
}

/* Moves the solenoid to the forward (A) position */
void Solenoid::forward (){
    digitalWrite (_pin, HIGH);
    _state = true;
}

/* Moves the solenoid to the reverse (B) position */
void Solenoid::reverse (){
    digitalWrite (_pin, LOW);
    _state = false;
}

bool Solenoid::isForward(){
    return (_state == true);
}

bool Solenoid::isReverse(){
    return (_state == false);
}
