//
// Created by Raphael Mamison on 2/23/23.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _Hit_points(10), _Energy_points(10), _Attack_damage(0), _name() {
    std::cout << "Constructor [" <<  _name << "] called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
    : _name(name), _Hit_points(10), _Energy_points(10), _Attack_damage(0) {
    std::cout << "Constructor [" << this->_name << "] called " << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor [" << _name << "] called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
    : _name(src._name), _Hit_points(src._Hit_points),
    _Energy_points(src._Energy_points), _Attack_damage(src._Attack_damage) {
        std::cout << "Constructor copy called" << std::endl;
    }

ClapTrap & ClapTrap::operator=(const ClapTrap &inst) {

    if (this != &inst) {
        this->_name = inst._name;
        this->_Hit_points = inst._Hit_points;
        this->_Energy_points = inst._Energy_points;
        this->_Attack_damage = inst._Attack_damage;
    }
    return *this;
}

void ClapTrap::attack(const std::string &target) {

    if (_Hit_points != 0 && _Energy_points != 0) {
        std::cout << "ClapTrap " << RED << _name << " attacks " << RESET << target;
        std::cout << " causing " << YELLOW <<_Attack_damage << RESET;
        std::cout << " points of damage" << std::endl;
        _Energy_points--;
        return ;
    }
    std::cout << "ClapTrap " << _name << " is already dead he can't do anything" << std::cout;
}

void ClapTrap::takeDamage(unsigned int amount) {

    if (_Hit_points != 0 && _Energy_points != 0) {
        if (amount > _Hit_points)
            amount = _Hit_points;
        _Hit_points -= amount;
        std::cout << "ClapTrap " << BLUE << _name << " take damage " << RESET << amount;
        std::cout << ": Hit points remaining " << YELLOW <<_Hit_points << RESET << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {

    if (_Hit_points != 0 && _Energy_points != 0) {
        std::cout << "ClapTrap " << GREEN << _name << " repaired: " << RESET;
        std::cout << "new Hit points: " << YELLOW <<_Hit_points + amount << RESET << std::endl;
        _Hit_points += amount;
        _Energy_points--;
        return ;
    }
    std::cout << RED << "ClapTrap [" << _name << "] is already dead he can't do anything";
    std::cout << RESET << std::endl;
}