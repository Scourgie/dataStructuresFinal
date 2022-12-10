#include "amphibian.h"

Amphibian::Amphibian() { }

Amphibian::Amphibian(std::string amClass, std::string amFamily, std::string amSpecies, std::string amName, std::string amAge, std::string amColor, std::string amEyeColor, std::string amNoct, std::string amTail) {

    this->aClass = amClass;
    this->family = amFamily;
    this->species = amSpecies;
    this->name = amName;
    this->age = amAge;
    this->color = amColor;
    this->eyeColor = amEyeColor;
    this->noct = amNoct;
    this->tail = amTail;
    this->typeNum = 1;

}

void Amphibian::setTail(std::string t) {
    this->tail = t;
}

std::string Amphibian::Print() {

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
                            "Pet Tail: " + tail + "\n";
    return toDisplay;

}

std::string Amphibian::distinct() {
    return tail;
}
