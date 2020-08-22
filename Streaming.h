//
// Created by fabiana on 21/08/2020.
//

#ifndef LAB04_SOLID_STREAMING_H
#define LAB04_SOLID_STREAMING_H
#include "Game.h"
#include "IReplace.h"

class Streaming : IReplace, public Game {

public:
    Streaming(string name, double price, double itemWeight, string productDimensions, double tax);

    void replace() override;

    string toString() override;

    ~Streaming();

};


#endif //LAB04_SOLID_STREAMING_H
