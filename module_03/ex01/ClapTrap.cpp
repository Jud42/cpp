//
// Created by Raphael Mamison on 2/23/23.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _name(), _Hit_points(100), _Energy_points(50), _Attack_damage(20) {
    std::cout << CLAP << "Constructor [" <<  _name << "] called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << CLAP << "Destructor [" << _name << "] called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
    : _name(name), _Hit_points(100), _Energy_points(50), _Attack_damage(20) {
    std::cout << CLAP << "Constructor [" << this->_name << "] called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
    : _name(src._name), _Hit_points(src._Hit_points),
    _Energy_points(src._Energy_points), _Attack_damage(src._Attack_damage) {
        std::cout << CLAP << "Constructor copy [" << _name << "] is called" << std::endl;
    }

ClapTrap & ClapTrap::operator=(const ClapTrap &rhs) {

    if (this != &rhs) {
        this->_name = rhs._name;
        this->_Hit_points = rhs._Hit_points;
        this->_Energy_points = rhs._Energy_points;
        this->_Attack_damage = rhs._Attack_damage;
    }
    std::cout << CLAP << "Operator assignment [" << _name << "] is called" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string &target) {

    if (_Hit_points != 0 && _Energy_points != 0) {
        std::cout << CLAP << _name << " attack " << target;
        std::cout << " causing " << _Attack_damage;
        std::cout << " points of damage" << std::endl;
        _Energy_points--;
        std::cout << CLAP << _name << " remaining " << _Energy_points << " energy Points!" << std::endl;
        return;
    }
    std::cout << CLAP << "["  <<_name;
    if (!_Energy_points)
        std::cout << "] has no more energy he can't do anything" << std::endl;
    else
        std::cout << "] has no more points he can't do anything" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {

    if (_Hit_points > 0 && _Energy_points > 0) {
        if (amount > _Hit_points)
            amount = _Hit_points;
        _Hit_points -= amount;
        std::cout << CLAP << _name << " take damage " << amount;
        std::cout << ": Hit points remaining " << _Hit_points << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {

    if (_Energy_points > 0) {
        std::cout << CLAP << _name << " repaired: ";
        std::cout << "new Hit points: " << _Hit_points + amount << std::endl;
        _Hit_points += amount;
        _Energy_points--;
        std::cout << CLAP << _name << " remaining " << _Energy_points << " energy Points!" << std::endl;
        return;
    }
    std::cout << CLAP << "[" <<_name;
    if (!_Energy_points)
        std::cout << "] has no more energy he can't do anything" << std::endl;
    else
        std::cout << "] has no more points he can't do anything" << std::endl;
}
