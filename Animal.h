#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

// basic Animal class
class Animal {
public:
    Animal();                                   // default animal
    Animal(const std::string& species, unsigned year); // custom animal
    void display() const;                       // print info

private:
    std::string species_;  // name
    unsigned year_;        // year found
};

#endif