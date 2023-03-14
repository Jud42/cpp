/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:45:32 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/10 13:57:33 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("ANIMAL") {

    std::cout << "<ANIMAL> Default Constructor is Called!" << std::endl;
}

Animal::~Animal() {

    std::cout << "<ANIMAL> Destructor is Called!" << std::endl;
}


Animal::Animal(const Animal &src) : _type(src._type) {

    std::cout << "<ANIMAL> Copy Constructor is Called!" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs) {

    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void Animal::makeSound() const {

    std::cout << "Im Animal! What kind? I dont know!" << std::endl;
}

std::string Animal::getType() const { return _type; }


