//
// Created by fabiana on 21/08/2020.
//

#ifndef LAB04_SOLID_PHYSICAL_H
#define LAB04_SOLID_PHYSICAL_H

#include "Game.h"
#include "IReplace.h"

class Physical : IReplace, public Game {
private:
    double itemWeight;
    string itemDimensions;
public:
    Physical(string name, double price, double itemWeight, string productDimensions, double tax);

    double getItemWeight();
    void setItemWeight(double);
    void setItemDimensions(string);
    string getItemDimensions();
    double replace() override;
    string toString() override;

    ~Physical();

};

#endif //LAB04_SOLID_PHYSICAL_H
