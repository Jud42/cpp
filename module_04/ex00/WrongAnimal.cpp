/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:09:50 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/10 12:10:22 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimalivds") {

    std::cout << "<WrongAnimal> Default Constructor is Called!" << std::endl;
}

WrongAnimal::~WrongAnimal() {

    std::cout << "<WrongAnimal> Destructor is Called!" << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal &src) : type(src.type) {

    std::cout << "<WrongAnimal> Copy Constructor is Called!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {

    if (this != &rhs)
        this->type = rhs.type;
    return *this;
}

void WrongAnimal::makeSound() const {

    std::cout << " <WrongAnimal> Im WrongAnimal! What kind? I dont know!" << std::endl;
}

std::string WrongAnimal::getType() const { return type; }


