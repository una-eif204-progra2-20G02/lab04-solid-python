//
// Created by fabiana on 21/08/2020.
//

#include "Digital.h"

Digital::Digital(string name, double price, /*double itemWeight, string productDimensions*/ double tax) : Game(name,/*, itemWeight, productDimensions,*/tax) {

}

double Digital::replace() { //este no seria un string ?? ->probably

}

string Digital::toString() {
    stringstream s;
    s<<"Digital : \n"<<Game::toString()<< endl;
    return s.str();
}

Digital::~Digital() {

}
