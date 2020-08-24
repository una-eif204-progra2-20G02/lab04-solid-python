//
// Created by Maikol Guzman on 8/17/20.
//

#include <iostream>
#include "Game.h"
#include "Physical.h"

int main() {
    Game game;
    Physical physicalGame;
    game.setName("Call of Duty: Black Ops 4 (PS4)");
    physicalGame.setItemWeight(0.564);
    physicalGame.setItemDimensions("3.94 x 0.59 x 5.91 inches; 0.56 Ounces");
    physicalGame.setPrice(24.66);
    physicalGame.setTax(0.13);
    std::cout << game.toString() << std::endl;

    game.save("game.txt");

    return 0;
}