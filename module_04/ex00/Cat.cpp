/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:07:26 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/18 10:56:32 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	_type = "Cat";
    std::cout << "Default Constructor [" << _type << "] is Called!" << std::endl;
}

Cat::~Cat() {

    std::cout << "Destructor [" << _type << "] is Called!" << std::endl;
}


Cat::Cat(const Cat &src) : Animal(src) {

    std::cout << "Copy Constructor [" << _type << "] is Called!" << std::endl;
}

Cat &Cat::operator=( const Cat &rhs ) {

    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void Cat::makeSound() const {

    std::cout << "Meaouuuuu!" << std::endl;
}
