#include "AnimalsInZoo.h"
#include <iostream>

// empty zoo
AnimalsInZoo::AnimalsInZoo() : numAnimals_(0), animal_() {}

// start with one animal
AnimalsInZoo::AnimalsInZoo(const Animal& a) : numAnimals_(1), animal_(a) {}

// set a new animal
void AnimalsInZoo::setAnimal(const Animal& a) {
    animal_ = a;
    numAnimals_ = 1;
}

// print count and animal
void AnimalsInZoo::display() const {
    std::cout << "Animals in zoo: " << numAnimals_ << "\n";
    if (numAnimals_ == 1) {
        animal_.display();
    }
}
