#ifndef MAMMAL_H
#define MAMMAL_H
#include "animals.h"

class Mammal: public Animal {

public:

    Mammal();
    Mammal(std::string mClass, std::string mFamily, std::string mSpecies, std::string mName, std::string mAge, std::string mColor, std::string mEyeColor, std::string mNoct, std::string mFur);
    virtual std::string Print();
    virtual std::string distinct();

    // --==-- Getters and Setters --==--

    std::string getFurColor() {return furColor;}

    void setFurColor(std::string);

protected:

    // variable to hold the color of the mammal's hair / fur
    std::string furColor;

};

#endif // MAMMAL_H
