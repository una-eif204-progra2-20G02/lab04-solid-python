//
// Created by fabiana on 21/08/2020.
//

#include "Streaming.h"
Streaming::Streaming():Game(){

}

Streaming::Streaming(string name,double price,double tax):Game(name,price,tax){

}


string Streaming::replace() {
    std::ostringstream output;
    output <<"this product will have a replacement" << endl;
}

string Streaming::toString() {
    std::ostringstream output;
    output << "Game Information: "<<Game::toString();
}

Streaming::~Streaming() {}