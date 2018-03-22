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
    setLowerLimit(lowerLimit);
    setUpperLimit(upperLimit);
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

void RangedEncoder::setLowerLimit (int lowerLimit){
    _lowerLimit = lowerLimit;
}

void RangedEncoder::setUpperLimit (int upperLimit){
    _upperLimit = upperLimit;
}
