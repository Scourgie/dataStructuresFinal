#include "reptile.h"

Reptile::Reptile() { }

Reptile::Reptile(std::string rClass, std::string rFamily, std::string rSpecies, std::string rName, std::string rAge, std::string rColor, std::string rEyeColor, std::string rNoct, std::string rTongue) {

    this->aClass = rClass;
    this->family = rFamily;
    this->species = rSpecies;
    this->name = rName;
    this->age = rAge;
    this->color = rColor;
    this->eyeColor = rEyeColor;
    this->noct = rNoct;
    this->tongue = rTongue;
    this->typeNum = 5;

}

void Reptile::setTongueType(std::string t) {
    this->tongue = t;
}

std::string Reptile::Print() {

    std::string indexString = std::to_string(index);

    std::string toDisplay = "Index: " + indexString + "\n" +
                            "Pet Class: " + aClass + "\n" +
                            "Pet Family: " + family + "\n" +
                            "Pet Species: " + species + "\n" +
                            "Pet Name: " + name + "\n" +
                            "Pet Age: " + age + "\n" +
                            "Pet Color: " + color + "\n" +
                            "Pet Eye Color: " + eyeColor + "\n" +
                            "Pet Nocturnal: " + noct + "\n" +
                            "Pet Tongue: " + tongue + "\n";
    return toDisplay;

}

std::string Reptile::distinct() {
    return tongue;
}
