//
//  Encoder.hpp
//  
//
//  Created by Orian Leitersdorf on 3/21/18.
//

#ifndef Encoder_hpp
#define Encoder_hpp

#include <stdio.h>

class Encoder
{
    
    public:
    
        /* Initializes the encoder with pin
         A and pin B */
        Encoder (int aPin, int bPin);
    
        /* Updates the encoder */
        void update();
    
        /* Returns the current value
         of the encoder (updates first) */
        int get();
    
        /* Resets the current value
         of the encoder */
        void reset();
    
        /* Returns the current state
         of the A pin */
        bool getA();
    
        /* Returns the current state
         of the B pin */
        bool getB();
    
    private:
        /* The pin for the A signal */
        int _aPin;
        /* The pin for the B signal */
        int _bPin;
    
        /* The current pulse count */
        int _count;
        /* The previous reading for the A pin */
        bool _prevState;
    
};

#endif /* Encoder_hpp */
