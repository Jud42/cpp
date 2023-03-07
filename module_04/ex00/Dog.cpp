//
// Created by Raphael Mamison on 3/4/23.
//

#include "Dog.hpp"

Dog::Dog() : Animal() {

    type = "Dog";
    std::cout << "Default Constructor [" << type << "] is Called!" << std::endl;
}

Dog::~Dog() {

    std::cout << "Destructor [" << type << "] is Called!" << std::endl;
}


Dog::Dog(const Dog &src) : Animal(src) {

    type = "Dog";
    std::cout << "Copy Constructor [" << type << "] is Called!" << std::endl;
}

Dog &Dog::operator=( const Dog &rhs ) {

    if (this != &rhs)
        this->type = rhs.type;
    return *this;
}

void Dog::makeSound() const {

    std::cout << "Wouuuuf!" << std::endl;
}
