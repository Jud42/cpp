/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:09:34 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/18 10:57:08 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {

    _type = "Dog";
    std::cout << "Default Constructor [" << _type << "] is Called!" << std::endl;
}

Dog::~Dog() {

    std::cout << "Destructor [" << _type << "] is Called!" << std::endl;
}


Dog::Dog(const Dog &src) : Animal(src) {

    std::cout << "Copy Constructor [" << _type << "] is Called!" << std::endl;
}

Dog &Dog::operator=( const Dog &rhs ) {

    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void Dog::makeSound() const {

    std::cout << "Wouuuuf!" << std::endl;
}
