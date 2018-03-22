//
//  Button.cpp
//  
//
//  Created by Orian Leitersdorf on 3/22/18.
//

#include "Button.hpp"
#include "Arduino.h"

/* Initializes the Button on the pin */
Button::Button (int pin){
    pinMode (pin, INPUT);
    _pin = pin;
}

/* Returns true if the button is currently pushed */
bool Button::isPushed(){
    return digitalRead (_pin);
}

/*
 Updates and returns true once every time the button is pressed.
 Call periodically for best results.
 */
bool Button::isPressed(){
    
    // Records the prev and current states, then updates
    // the previous state stored to the current state
    bool prev = _prevState;
    bool current = isPushed();
    _prevState = current;
    
    return (prev == false) && (current == true);
}
