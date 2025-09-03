#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H

#include "Animal.h"

// holds 0 or 1 animal
class AnimalsInZoo {
public:
    AnimalsInZoo();                          // empty
    explicit AnimalsInZoo(const Animal& a);  // with one
    void setAnimal(const Animal& a);         // add animal
    void display() const;                    // show info

private:
    int    numAnimals_;  // count
    Animal animal_;      // stored animal
};

#endif
