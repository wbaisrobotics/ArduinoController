//
//  Solenoid.hpp
//  
//  Allows for control of a pneumaitc solenoid (using a relay, for double solenoid connect A to NO and B to NC)
//
//  Created by Orian Leitersdorf on 3/21/18.
//

#ifndef Solenoid_hpp
#define Solenoid_hpp

#include <stdio.h>
#include "Arduino.h"

class Solenoid
{
    
    public:
    
        /* Initializes the Solenoid on a pin */
        Solenoid (int pin);
    
        /* Sets the solenoid to the forward position */
        void forward();
    
        /* Sets the solenoid to the reverse position */
        void reverse();
    private:
        /* The pin connected to the relay */
        int _pin;
    
};

#endif /* Solenoid_hpp */
