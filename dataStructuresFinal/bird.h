#ifndef BIRD_H
#define BIRD_H
#include "animals.h"

class Bird: public Animal {

public:

    Bird();
    Bird(std::string bClass, std::string bFamily, std::string bSpecies, std::string bName, std::string bAge, std::string bColor, std::string bEyeColor, std::string bNoct, std::string bBeakColor);
    virtual std::string Print();
    virtual std::string distinct();

    // --==-- Getters and Setters --==--

    std::string getBeakColor() {return beakColor;}

    void setBeakColor(std::string);

protected:

    // variable to hold the color of the bird's beak
    std::string beakColor;

};

#endif // BIRD_H
