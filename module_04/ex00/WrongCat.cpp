/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:10:06 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/10 12:10:08 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
