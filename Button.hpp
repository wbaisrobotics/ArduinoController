//
//  Button.hpp
//  
//
//  Created by Orian Leitersdorf on 3/22/18.
//

#ifndef Button_hpp
#define Button_hpp

#include <stdio.h>

/*
 Connect the limit Button by
 shorting ground to the input (using a resistor), and then connecting
 that to the NO side of the Button, connecting
 the other side to 5V.
 */
class Button
{
    
    public:
        /* Initializes the Button on the pin */
        Button (int pin);
        /* Returns true if the button is currently pushed */
        bool isPushed();
        /*
         Updates and returns true once every time the button is pressed.
         Call periodically for best results.
         */
        bool isPressed();
    private:
        /* The previous state of the button */
        bool _prevState;
        /* The Arduino pin used */
        int _pin;
};

#endif /* Button_hpp */
