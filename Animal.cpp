#include "Animal.h"

// default values
Animal::Animal() : species_("Unknown"), year_(0) {}

// set values
Animal::Animal(const std::string& species, unsigned year)
    : species_(species), year_(year) {}

// print animal info
void Animal::display() const {
    std::cout << species_ << " [" << year_ << "]\n";
}