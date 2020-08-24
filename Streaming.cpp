//
// Created by fabiana on 21/08/2020.
//

#include "Streaming.h"

Streaming::Streaming(string name, double price, /*double itemWeight, string productDimensions,*/ double tax) : Game(name, /*itemWeight, productDimensions,*/tax) {

}

string Streaming::replace() {
    stringstream s;
    s << "This product will have a replacement" << endl;
}

string Streaming::toString() {
    stringstream s;
    s<<"Streaming : \n"<<Game::toString()<< endl;
    return s.str();
}

Streaming::~Streaming() {
    
}
