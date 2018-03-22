//
//  RangedEncoder.hpp
//  
//
//  Created by Orian Leitersdorf on 3/22/18.
//

#ifndef RangedEncoder_hpp
#define RangedEncoder_hpp

#include <stdio.h>
#include "Encoder.hpp"

class RangedEncoder: public Encoder
{
    
    public:
        RangedEncoder (int aPin, int bPin, int lowerLimit, int upperLimit);
        int get();
    private:
        int _lowerLimit;
        int _upperLimit;
    
};

#endif /* RangedEncoder_hpp */
