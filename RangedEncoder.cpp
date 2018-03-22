//
//  RangedEncoder.cpp
//  
//
//  Created by Orian Leitersdorf on 3/22/18.
//

#include "RangedEncoder.hpp"

RangedEncoder::RangedEncoder (int aPin, int bPin, int lowerLimit, int upperLimit)
:Encoder (aPin, bPin)
{
    _lowerLimit = lowerLimit;
    _upperLimit = upperLimit;
}

int RangedEncoder::get(){
    int count = Encoder::get();
    if (count < _lowerLimit){
        Encoder::set(_lowerLimit);
    }
    else if (count > _upperLimit){
        Encoder::set(_upperLimit);
    }
    return count;
}
