//
// Created by fabiana on 21/08/2020.
//

#include "Physical.h"

Physical::Physical(string name, double price, double itemWeight, string productDimensions, double tax) : Game(name, itemWeight, productDimensions,tax) {

}

void Physical::replace() { //este no seria un string ??

}

string Physical::toString() {
    stringstream s;
    s<<"Digital : \n"<<Game::toString()<< endl;
    return s.str();
}

Physical::~Physical() {

}
