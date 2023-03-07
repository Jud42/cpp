//
// Created by Raphael Mamison on 3/4/23.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {

    _type = "WrongCat";
    std::cout << "Default Constructor [" << _type << "] is Called!" << std::endl;
}

WrongCat::~WrongCat() {

    std::cout << "Destructor [" << _type << "] is Called!" << std::endl;
}


WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src) {

    _type = "WrongCat";
    std::cout << "Copy Constructor [" << _type << "] is Called!" << std::endl;
}

WrongCat &WrongCat::operator=( const WrongCat &rhs ) {

    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void WrongCat::makeSound() const {

    std::cout << "<Wrong> Meaouuuuu!" << std::endl;
}
