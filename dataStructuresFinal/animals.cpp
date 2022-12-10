#include "animals.h"

void Animal::setClass(std::string c) {
    this->aClass = c;
}

void Animal::setFamily(std::string f) {
    this->family = f;
}

void Animal::setSpecies(std::string s) {
    this->species = s;
}

void Animal::setName(std::string n) {
    this->name = n;
}

void Animal::setAge(std::string a) {
    this->age = a;
}

void Animal::setColor(std::string c) {
    this->color = c;
}

void Animal::setEyeColor(std::string e) {
    this->eyeColor = e;
}

void Animal::setNocturnal(std::string n) {
    this->noct = n;
}

void Animal::setIndex(int i) {
    this->index = i;
}

void Animal::setTypeNum(int n) {
    this->typeNum = n;
}

std::string Animal::Print() {

    std::string toDisplay = "Pet Class: " + aClass + "\n" +
                            "Pet Family: " + family + "\n" +
                            "Pet Species: " + species + "\n" +
                            "Pet Name: " + name + "\n" +
                            "Pet Age: " + age + "\n" +
                            "Pet Color: " + color + "\n" +
                            "Pet Eye Color: " + eyeColor + "\n" +
                            "Pet Nocturnal: " + noct + "\n";
    return toDisplay;

}

std::string Animal::distinct() {

    return "default";

}
