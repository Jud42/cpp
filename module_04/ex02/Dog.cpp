/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:24:42 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/05 11:09:02 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain) {

    _type = "Dog";
    std::cout << "Default Constructor [" << _type << "] is Called!" << std::endl;
}

Dog::~Dog() {

	delete _brain;
    std::cout << "Destructor [" << _type << "] is Called!" << std::endl;
}


Dog::Dog(const Dog &src) : Animal(src), _brain(src._brain) {

    _type = "Dog";
    std::cout << "Copy Constructor [" << _type << "] is Called!" << std::endl;
}

Dog &Dog::operator=( const Dog &rhs ) {

    if (this != &rhs) {

        this->_type = rhs._type;
		this->_brain = rhs._brain;
	}
    return *this;
}

void Dog::makeSound() const {

    std::cout << "Wouuuuf!" << std::endl;
}


/*
std::ostream & operator<<(std::ostream & os, const Dog &obj) {

	(void) obj;
	os << "BLABLABLALBALB ";
	return os;
}*/
