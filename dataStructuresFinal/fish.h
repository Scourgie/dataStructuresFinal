#ifndef FISH_H
#define FISH_H
#include "animals.h"

class Fish: public Animal {

public:

    Fish();
    Fish(std::string fClass, std::string fFamily, std::string fSpecies, std::string fName, std::string fAge, std::string fColor, std::string fEyeColor, std::string fNoct, std::string fWater);
    virtual std::string Print();
    virtual std::string distinct();

    // --==-- Getters and Setters --==--

    std::string getWaterType() {return waterType;}

    void setWaterType(std::string);

protected:

    // variable to hold what type of water the fish lives in
    std::string waterType;

};

#endif // FISH_H
