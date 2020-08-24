//
// Created by fabiana on 21/08/2020.
//

#include "Physical.h"

Physical::Physical() {
    itemWeight = 0.0;
    itemDimensions = "";
}

Physical::Physical(string name, double price, double itemWeight, string productDimensions, double tax) : Game(name, tax) {
this->itemWeight = itemWeight;
this->itemDimensions = itemDimensions;
}



string Physical::toString() {
    stringstream s;
    s<<"Digital : \n"<<Game::toString()<< endl;
    return s.str();
}

Physical::~Physical() {

}

double Physical::getItemWeight() {
    return itemWeight;
}

void Physical::setItemWeight(double itemWeight) {
this->itemWeight = itemWeight;
}

void Physical::setItemDimensions(string itemDimensions) {
this->itemDimensions = itemDimensions;
}

string Physical::getItemDimensions() {
    return std::string();
}

string Physical::shipment() {
    stringstream s;
    s << "This product will have a shipment" << endl;
    return s.str();
}


