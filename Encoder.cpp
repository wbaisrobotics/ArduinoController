//
//  Encoder.cpp
//  
//
//  Created by Orian Leitersdorf on 3/21/18.
//

#include "Encoder.hpp"
#include "Arduino.h"

/* Initializes the encoder with pin
 A and pin B */
Encoder::Encoder (int aPin, int bPin){
    // Register the pins as inputs and save them
    pinMode (aPin, INPUT);
    pinMode (bPin, INPUT);
    _aPin = aPin;
    _bPin = bPin;
    // Reset the current count
    reset();
}

/* Updates the count by checking the inputs, should be called periodically */
void Encoder::update(){
    // Reads the current value for the A pin
    bool aReading = digitalRead (_aPin);]
    // If the state of A changed, a pulse occoured
    if (aReading != _prevState){
        // If A and B are different, rotating clockwise
        if (aReading != digitalRead(_bPin)){
            _count ++;
        }
        // Else, rotating counter clockwise
        else{
            _count --;
        }
    }
    // Sets the previous reading to the current reading
    _prevState = aReading;
}

/* Updates and then returns the current count,
 if called periodically can replace periodic calls to update() */
int Encoder::get(){
    update();
    return _count;
}

/* Resets the current count */
void Encoder::reset (){
    _count = 0;
}
