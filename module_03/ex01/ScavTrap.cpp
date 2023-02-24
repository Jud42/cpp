//
// Created by Raphael Mamison on 2/24/23.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {

    std::cout << "<SCAVTRAP> [DEFAULT]" ;
    std::cout << " Constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {

    std::cout << "<SCAVTRAP> Destructor [" << _name << "] called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {

    std::cout << "<SCAVTRAP> [" << this->_name;
    std::cout << "] Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
    _name = src._name;
    _Hit_points = src._Hit_points;
    _Energy_points = src._Energy_points;
    _Attack_damage = src._Attack_damage;

    std::cout << "<SCAVTRAP> [" << this->_name;
    std::cout << "] Constructor copy called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {

    if (this != &rhs) {
        this->_name = rhs._name;
        this->_Hit_points = rhs._Hit_points;
        this->_Energy_points = rhs._Energy_points;
        this->_Attack_damage = rhs._Attack_damage;
    }
    std::cout << "<SCAVTRAP> [" << this->_name;
    std::cout << "] Constructor assignment called" << std::endl;
    return *this;
}

void ScavTrap::guardGate() {

    std::cout << "<SCAVTRAP> [" << this->_name;
    std::cout << " mode keeper" << std::endl;
}


