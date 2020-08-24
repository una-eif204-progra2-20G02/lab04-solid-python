//
// Created by fabiana on 21/08/2020.
//

#include "Digital.h"

Digital::Digital(string name, double price, /*double itemWeight, string productDimensions*/ double tax) : Game(name,/*, itemWeight, productDimensions,*/tax) {

}

string Digital::replace() {
stringstream s;
s << "This item will have a replacement" << endl;
return s.str();
}

string Digital::toString() {
    stringstream s;
    s<<"Digital : \n"<<Game::toString()<< endl;
    return s.str();
}

Digital::~Digital() {

}

double Digital::discount() {
    double discount = (getPrice() + getTax()) * 0.15;
    return discount;
}
