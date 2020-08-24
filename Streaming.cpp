//
// Created by fabiana on 21/08/2020.
//

#include "Streaming.h"

Streaming::Streaming(string name, double price, double itemWeight, string productDimensions, double tax) : Game(name, itemWeight, productDimensions,tax) {

}

double Streaming::replace() { //este no seria un string ??
    
}

string Streaming::toString() {
    stringstream s;
    s<<"Streaming : \n"<<Game::toString()<< endl;
    return s.str();
}

Streaming::~Streaming() {
    
}
