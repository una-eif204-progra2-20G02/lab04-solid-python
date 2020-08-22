//
// Created by fabiana on 21/08/2020.
//

#include "Digital.h"

Digital::Digital(string name, double price, double itemWeight, string productDimensions, double tax) : Game(name, itemWeight, productDimensions,tax) {

}

void Digital::replace() { //este no seria un string ??

}

string Digital::toString() {
    stringstream s;
    s<<"Digital : \n"<<Game::toString()<< endl;
    return s.str();
}

Digital::~Digital() {

}
