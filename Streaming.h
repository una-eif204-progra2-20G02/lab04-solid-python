//
// Created by fabiana on 21/08/2020.
//

#ifndef LAB04_SOLID_STREAMING_H
#define LAB04_SOLID_STREAMING_H
#include "Game.h"
#include "IReplace.h"

class Streaming : IReplace, public Game {

public:
    Streaming();
    Streaming(string,double,double);
    string toString() override;
    ~Streaming();
    string replace();
};


#endif //LAB04_SOLID_STREAMING_H
