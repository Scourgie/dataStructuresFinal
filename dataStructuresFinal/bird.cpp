#include "bird.h"

Bird::Bird() { }

Bird::Bird(std::string bClass, std::string bFamily, std::string bSpecies, std::string bName, std::string bAge, std::string bColor, std::string bEyeColor, std::string bNoct, std::string bBeakColor) {

    this->aClass = bClass;
    this->family = bFamily;
    this->species = bSpecies;
    this->name = bName;
    this->age = bAge;
    this->color = bColor;
    this->eyeColor = bEyeColor;
    this->noct = bNoct;
    this->beakColor = bBeakColor;
    this->typeNum = 2;

}

void Bird::setBeakColor(std::string b) {
    this->beakColor = b;
}

std::string Bird::Print() {

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
                            "Pet Beak Color: " + beakColor + "\n";
    return toDisplay;

}

std::string Bird::distinct() {
    return beakColor;
}
