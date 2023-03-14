/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:51:02 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/10 13:57:46 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimalivds") {

    std::cout << "<WrongAnimal> Default Constructor is Called!" << std::endl;
}

WrongAnimal::~WrongAnimal() {

    std::cout << "<WrongAnimal> Destructor is Called!" << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal &src) : _type(src._type) {

    std::cout << "<WrongAnimal> Copy Constructor is Called!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {

    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void WrongAnimal::makeSound() const {

    std::cout << " <WrongAnimal> Im WrongAnimal! What kind? I dont know!" << std::endl;
}

std::string WrongAnimal::getType() const { return _type; }
