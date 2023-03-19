/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:19:03 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/09 12:46:18 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits_fractional = 8;

Fixed::Fixed()
    : _value(0) {

    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {

    std::cout << "Deconstructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) {

    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed &Fixed::operator=(const Fixed &rhs) {

    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {

	std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed::setRawBits(int const raw) {

    std::cout << "setRawBits mumber function called" << std::endl;
    _value = raw;
}
