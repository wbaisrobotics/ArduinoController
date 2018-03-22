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
    // Set the previous state to what the pin currently is
    _prevState = getA();
}

/* Updates the count by checking the inputs, should be called periodically */
void Encoder::update(){
    // Reads the current value for the A pin
    bool aReading = getA();
    // If A was false and now is true, rising pulse
    if (_prevState == false && aReading == true){
        // If B is true, rotating clockwise
        if (getB() == true){
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
    set(0);
}

/* Sets the count to a given int */
void Encoder::set(int newCount){
    _count = newCount;
}

/* Returns the current state
 of the A pin */
bool Encoder::getA(){
    return digitalRead(_aPin);
}

/* Returns the current state
 of the B pin */
bool Encoder::getB(){
    return digitalRead(_bPin);
}
