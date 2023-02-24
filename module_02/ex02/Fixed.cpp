//
// Created by Raphael Mamison on 2/21/23.
//

#include "Fixed.hpp"

//constructor
Fixed::Fixed()
    : _value(0) {

    //std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {

    //std::cout << "Deconstructor called" << std::endl;
}

Fixed::Fixed(const int i) {

    _value = i << _bits_fractional;
}

Fixed::Fixed(const float f) {

    _value = roundf(f * (1 << _bits_fractional));
    // Scale the floating-point value and round to the nearest integer
}

Fixed::Fixed(const Fixed &src) {

    *this = src;
}

//operator overload

/*--------Operator assignment--------*/
Fixed &Fixed::operator=(const Fixed &rhs) {

    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return *this;
}

/*--------Operator compare------------*/
const bool Fixed::operator<(const Fixed &rhs) const {

    return this->_value < rhs._value;
}

const bool Fixed::operator>(const Fixed &rhs) const{

    return this->_value > rhs._value;
}

const bool Fixed::operator<=(const Fixed &rhs) const {

    return this->_value <= rhs._value;
}

const bool Fixed::operator>=(const Fixed &rhs) const {

    return this->_value >= rhs._value;
}

const bool Fixed::operator==(const Fixed &rhs) const {

    return this->_value == rhs._value;
}

const bool Fixed::operator!=(const Fixed &rhs) const {

    return this->_value != rhs._value;
}

/*---------Operator arithmetic------------*/
Fixed Fixed::operator+(const Fixed &rhs) {

    this->_value++;
    return *this;
}

Fixed Fixed::operator-(const Fixed &rhs) {

    this->_value = this->_value - rhs._value;
    return *this;
}

Fixed Fixed::operator*(const Fixed &rhs) {

    Fixed res(this->toFloat() * rhs.toFloat());
    return res;
}

Fixed Fixed::operator/(const Fixed &rhs) {

    Fixed res(this->toFloat() / rhs.toFloat());
    return res;
}

/*-----------Increment-Decrement-----------*/
Fixed &Fixed::operator++(void) {

    ++this->_value;
    return *this;
}

Fixed &Fixed::operator--(void) {

    --(this->_value);
    return *this;
}

Fixed Fixed::operator++(int) {

    Fixed prev(*this);
    this->_value++;
    return prev;
}

Fixed Fixed::operator--(int) {

    Fixed prev(*this);
    this->_value--;
    return prev;
}

//Method
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

Fixed Fixed::min(Fixed &a, Fixed &b) {

    return (a < b) ? a : b;
}

Fixed Fixed::min(const Fixed &a, const Fixed &b) {

    return (a < b) ? a : b;
}

Fixed Fixed::max(Fixed &a, Fixed &b) {

    return (a > b) ? a : b;
}

Fixed Fixed::max(const Fixed &a, const Fixed &b) {

    return (a > b) ? a : b;
}

//Output operator
std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {

    os << fixed.toFloat();
    return os;
}