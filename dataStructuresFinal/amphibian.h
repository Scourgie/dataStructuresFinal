#ifndef AMPHIBIAN_H
#define AMPHIBIAN_H
#include "animals.h"

class Amphibian: public Animal {

public:

    Amphibian();
    Amphibian(std::string amClass, std::string amFamily, std::string amSpecies, std::string amName, std::string amAge, std::string amColor, std::string amEyeColor, std::string amNoct, std::string amTail);
    virtual std::string Print();
    virtual std::string distinct();

    // --==-- Getters and Setters --==--

    std::string getTail() {return tail;}

    void setTail(std::string);

protected:

    // variable to if the amphibian has a tail
    std::string tail;

};

#endif // AMPHIBIAN_H
