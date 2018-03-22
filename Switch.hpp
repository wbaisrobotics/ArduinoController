//
//  Switch.hpp
//  
//
//  Created by Orian Leitersdorf on 3/22/18.
//

#ifndef Switch_hpp
#define Switch_hpp

#include <stdio.h>

/*
 Connect the limit switch by
 shorting ground to the input, and then connecting
 that to the NO side of the switch, connecting
 the other side to 5V.
 */
class Switch
{
    
    public:
        /* Initializes the switch on the pin */
        Switch (int pin);
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

#endif /* Switch_hpp */
