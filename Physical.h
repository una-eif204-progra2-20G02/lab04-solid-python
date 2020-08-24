//
// Created by fabiana on 21/08/2020.
//

#ifndef LAB04_SOLID_PHYSICAL_H
#define LAB04_SOLID_PHYSICAL_H

#include "Game.h"
    #include "IShipment.h"

class Physical : IShipment, public Game {
private:
    double itemWeight;
    string itemDimensions;
public:
    Physical();
    Physical(string name, double price, double itemWeight, string productDimensions, double tax);
    string shipment() override;
    double getItemWeight();
    void setItemWeight(double);
    void setItemDimensions(string);
    string getItemDimensions();

    string toString() override;

    ~Physical();

};

#endif //LAB04_SOLID_PHYSICAL_H
