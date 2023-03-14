/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:09:34 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/10 12:10:15 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
