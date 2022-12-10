#ifndef REPTILE_H
#define REPTILE_H
#include "animals.h"

class Reptile: public Animal {

public:

    Reptile();
    Reptile(std::string rClass, std::string rFamily, std::string rSpecies, std::string rName, std::string rAge, std::string rColor, std::string rEyeColor, std::string rNoct, std::string rTongue);
    virtual std::string Print();
    virtual std::string distinct();

    // --==-- Getters and Setters --==--

    std::string getTongueType() {return tongue;}

    void setTongueType(std::string);

protected:

    // variable to hold if the reptile has a split tongue
    std::string tongue;

};


#endif // REPTILE_H
