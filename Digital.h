//
// Created by fabiana on 21/08/2020.
//

#ifndef LAB04_SOLID_DIGITAL_H
#define LAB04_SOLID_DIGITAL_H

#include "Game.h"
#include "IReplace.h"

class Digital : IReplace, public Game {
    public:
        Digital(string name, double price/*, double itemWeight, string productDimensions,*/, double tax);

        double replace() override;

        string toString() override;

        ~Digital();

};


#endif //LAB04_SOLID_DIGITAL_H
