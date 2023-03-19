/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:47:10 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/09 13:06:52 by rmamison         ###   ########.fr       */
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

Fixed::Fixed(const int i) {

    std::cout << "Int constructor called" << std::endl;
    _value = i << _bits_fractional;
}

Fixed::Fixed(const float f) {

    std::cout << "Float constructor called" << std::endl;
    _value = roundf(f * (1 << _bits_fractional));
    // Scale the floating-point value and round to the nearest integer
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
    return _value;
}

void Fixed::setRawBits(int const raw) {

    _value = raw;
}

float Fixed::toFloat(void) const {

    return float(_value) / (1 << _bits_fractional);
}

int Fixed::toInt(void) const {

    return _value >> _bits_fractional;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {

    os << fixed.toFloat();
    return os;
}
