/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:20:25 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/18 10:59:51 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), _brain(new Brain) {

	_type = "Cat";
    std::cout << "Default Constructor [" << _type << "] is Called!" << std::endl;
}

Cat::~Cat() {

	delete _brain;
    std::cout << "Destructor [" << _type << "] is Called!" << std::endl;
}


Cat::Cat(const Cat &src) : Animal(src), _brain(src._brain) {

    std::cout << "Copy Constructor [" << _type << "] is Called!" << std::endl;
}

Cat &Cat::operator=( const Cat &rhs ) {

    if (this != &rhs) {
     
	 	this->_type = rhs._type;
		this->_brain = rhs._brain;
	}
    return *this;
}

void Cat::makeSound() const {

    std::cout << "Meaouuuuu!" << std::endl;
}
