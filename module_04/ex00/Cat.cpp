//
// Created by Raphael Mamison on 3/4/23.
//

#include "Cat.hpp"

Cat::Cat() : Animal() {

    type = "Cat";
    std::cout << "Default Constructor [" << type << "] is Called!" << std::endl;
}

Cat::~Cat() {

    std::cout << "Destructor [" << type << "] is Called!" << std::endl;
}


Cat::Cat(const Cat &src) : Animal(src) {

    type = "Cat";
    std::cout << "Copy Constructor [" << type << "] is Called!" << std::endl;
}

Cat &Cat::operator=( const Cat &rhs ) {

    if (this != &rhs)
        this->type = rhs.type;
    return *this;
}

void Cat::makeSound() const {

    std::cout << "Meaouuuuu!" << std::endl;
}
