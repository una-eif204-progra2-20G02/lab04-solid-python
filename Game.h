//
// Created by Maikol Guzman on 8/17/20.
//

#ifndef LAB04_SOLID_GAME_H
#define LAB04_SOLID_GAME_H

#include <sstream>
#include <iostream>
using namespace std;

class Game {

private:
    std::string name;
    double price;
    double tax;
    //double itemWeight; open/close principle, physical game has weight, but
    //a streaming or digital game does not have a weight
   // std::string productDimensions; open/close principle

public:
    Game();

    Game(const std::string &name, double price, double tax);

    Game(const std::string &name, double price);

    const std::string &getName() const;

    void setName(const std::string &name);

    double getPrice() const;

    void setPrice(double price);

    double getTax() const;

    void setTax(double tax);

   // double getItemWeight() const;

   // void setItemWeight(double itemWeight);

    const std::string &getProductDimensions() const;

   // void setProductDimensions(const std::string &productDimensions);

    virtual double calculatePriceWithTax(); //virtual

    virtual void save(const std::string &filename); // virtual

    virtual std::string toString();//virtual

};


#endif //LAB04_SOLID_GAME_H
