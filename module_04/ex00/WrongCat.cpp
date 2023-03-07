//
// Created by Raphael Mamison on 3/4/23.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {

    type = "WrongCat";
    std::cout << "Default Constructor [" << type << "] is Called!" << std::endl;
}

WrongCat::~WrongCat() {

    std::cout << "Destructor [" << type << "] is Called!" << std::endl;
}


WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src) {

    type = "WrongCat";
    std::cout << "Copy Constructor [" << type << "] is Called!" << std::endl;
}

WrongCat &WrongCat::operator=( const WrongCat &rhs ) {

    if (this != &rhs)
        this->type = rhs.type;
    return *this;
}

void WrongCat::makeSound() const {

    std::cout << "<Wrong> Meaouuuuu!" << std::endl;
}