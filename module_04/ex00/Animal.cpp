//
// Created by Raphael Mamison on 3/4/23.
//

#include "Animal.hpp"

Animal::Animal() : type("ANIMAL") {

    std::cout << "<ANIMAL> Default Constructor is Called!" << std::endl;
}

Animal::~Animal() {

    std::cout << "<ANIMAL> Destructor is Called!" << std::endl;
}


Animal::Animal(const Animal &src) : type(src.type) {

    std::cout << "<ANIMAL> Copy Constructor is Called!" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs) {

    if (this != &rhs)
        this->type = rhs.type;
    return *this;
}

void Animal::makeSound() const {

    std::cout << "Im Animal! What kind? I dont know!" << std::endl;
}

std::string Animal::getType() const { return type; }


