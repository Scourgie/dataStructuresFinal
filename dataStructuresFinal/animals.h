#ifndef ANIMALS_H
#define ANIMALS_H
#include <string>

class Animal {

public:

    // virtual print function because variables for each type of animal will be different
    virtual std::string Print();

    virtual std::string distinct();

    // --==-- Getters and Setters --==--

    std::string getClass() {return aClass;}
    std::string getFamily() {return family;}
    std::string getSpecies() {return species;}
    std::string getName() {return name;}
    std::string getAge() {return age;}
    std::string getColor() {return color;}
    std::string getEyeColor() {return eyeColor;}
    std::string getNocturnal() {return noct;}
    int getIndex() {return index;}
    int getTypeNum() {return typeNum;}

    void setClass(std::string);
    void setFamily(std::string);
    void setSpecies(std::string);
    void setName(std::string);
    void setAge(std::string);
    void setColor(std::string);
    void setEyeColor(std::string);
    void setNocturnal(std::string);
    void setIndex(int);
    void setTypeNum(int);




protected:

    // --==-- Variables for general animal information --==--

    // variable to hold the class of animal (ex: mammal or reptile)
    std::string aClass;
    // variable to hold the family of the animal (ex: cat or dog)
    std::string family;
    // variable to hold the species of the animal (ex: corn snake or ball python)
    std::string species;

    // --==-- Variables for description of animal --==--

    // variable to hold the given name of the animal (ex: Boo)
    std::string name;
    // variable to hold the age of the animal (ex: 2 years)
    std::string age;
    // variable to hold the color of the animal (ex: skin color for cats or scale color for snakes)
    std::string color;
    // variable to hold the eye color of the animal (ex: cat with blue eyes)
    std::string eyeColor;
    // variable to hold if the animal is nocturnal (ex: cats are nocturnal)
    std::string noct;
    // variable to hold index number of animal for sorting and viewing
    int index;
    // variable to hold numerical value equal to animal type for sorting and viewing
    int typeNum;



};


#endif // ANIMALS_H
