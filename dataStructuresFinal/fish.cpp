#include "fish.h"

Fish::Fish() { }

Fish::Fish(std::string fClass, std::string fFamily, std::string fSpecies, std::string fName, std::string fAge, std::string fColor, std::string fEyeColor, std::string fNoct, std::string fWater) {

    this->aClass = fClass;
    this->family = fFamily;
    this->species = fSpecies;
    this->name = fName;
    this->age = fAge;
    this->color = fColor;
    this->eyeColor = fEyeColor;
    this->noct = fNoct;
    this->waterType = fWater;
    this->typeNum = 3;

}

void Fish::setWaterType(std::string w) {
    this->waterType = w;
}

std::string Fish::Print() {

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
                            "Pet Water Type: " + waterType + "\n";
    return toDisplay;

}

std::string Fish::distinct() {
    return waterType;
}
