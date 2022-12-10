#include "mammal.h"

Mammal::Mammal() { }

Mammal::Mammal(std::string mClass, std::string mFamily, std::string mSpecies, std::string mName, std::string mAge, std::string mColor, std::string mEyeColor, std::string mNoct, std::string mFur) {

    this->aClass = mClass;
    this->family = mFamily;
    this->species = mSpecies;
    this->name = mName;
    this->age = mAge;
    this->color = mColor;
    this->eyeColor = mEyeColor;
    this->noct = mNoct;
    this->furColor = mFur;
    this->typeNum = 4;

}

void Mammal::setFurColor(std::string f) {
    this->furColor = f;
}

std::string Mammal::Print() {

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
                            "Pet Fur Color: " + furColor + "\n";
    return toDisplay;

}

std::string Mammal::distinct() {
    return furColor;
}
