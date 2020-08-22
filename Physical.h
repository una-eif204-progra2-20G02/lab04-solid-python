//
// Created by fabiana on 21/08/2020.
//

#ifndef LAB04_SOLID_PHYSICAL_H
#define LAB04_SOLID_PHYSICAL_H

#include "Game.h"
#include "IReplace.h"

class Physical : IReplace, public Game {

public:
    Physical(string name, double price, double itemWeight, string productDimensions, double tax);

    void replace() override;

    string toString() override;

    ~Physical();

};

#endif //LAB04_SOLID_PHYSICAL_H
