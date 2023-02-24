//
// Created by Raphael Mamison on 2/23/23.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _Hit_points(100), _Energy_points(50), _Attack_damage(20), _name() {
    std::cout << SCLAP << "Constructor [" <<  _name << "] called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
    : _name(name), _Hit_points(100), _Energy_points(50), _Attack_damage(20) {
    std::cout << SCLAP << "Constructor [" << this->_name << "] called " << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << SCLAP <<"Destructor [" << _name << "] called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
    : _name(src._name), _Hit_points(src._Hit_points),
    _Energy_points(src._Energy_points), _Attack_damage(src._Attack_damage) {
        std::cout << "Constructor copy called" << std::endl;
    }

ClapTrap & ClapTrap::operator=(const ClapTrap &rhs) {

    if (this != &rhs) {
        this->_name = rhs._name;
        this->_Hit_points = rhs._Hit_points;
        this->_Energy_points = rhs._Energy_points;
        this->_Attack_damage = rhs._Attack_damage;
    }
    return *this;
}

void ClapTrap::attack(const std::string &target) {

    if (_Hit_points != 0 && _Energy_points != 0) {
        std::cout << SCLAP << _name << "attacks " << target;
        std::cout << " causing " << _Attack_damage;
        std::cout << " points of damage" << std::endl;
        _Energy_points--;
        return ;
    }
    std::cout << SCLAP << _name << " is already dead he can't do anything" << std::cout;
}

void ClapTrap::takeDamage(unsigned int amount) {

    if (_Hit_points != 0 && _Energy_points != 0) {
        if (amount > _Hit_points)
            amount = _Hit_points;
        _Hit_points -= amount;
        std::cout << SCLAP << _name << " take damage " << amount;
        std::cout << ": Hit points remaining " << _Hit_points << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {

    if (_Hit_points != 0 && _Energy_points != 0) {
        std::cout << SCLAP << _name << " repaired: ";
        std::cout << "new Hit points: " <<_Hit_points + amount << std::endl;
        _Hit_points += amount;
        _Energy_points--;
        return ;
    }
    std::cout << SCLAP << "[" <<_name;
    std::cout << "] is already dead he can't do anything" << std::endl;
}
