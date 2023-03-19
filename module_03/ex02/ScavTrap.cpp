/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:41:14 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/09 19:41:53 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {

    std::cout << SCAV << "Constructor [" <<  _name << "] called" << std::endl;
}

ScavTrap::~ScavTrap() {

    std::cout << SCAV << "Destructor [" << _name << "] called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {

    std::cout << SCAV << "Constructor [" << this->_name << "] called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) {
    
    _name = src._name;
    _Hit_points = src._Hit_points;
    _Energy_points = src._Energy_points;
    _Attack_damage = src._Attack_damage;
    std::cout << SCAV << "Constructor copy [" << _name << "] is called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {

    if (this != &rhs) {
        this->_name = rhs._name;
        this->_Hit_points = rhs._Hit_points;
        this->_Energy_points = rhs._Energy_points;
        this->_Attack_damage = rhs._Attack_damage;
    }
    std::cout << SCAV << "Operator assignment [" << _name << "] is called" << std::endl;
    return *this;
}

void ScavTrap::attack(const std::string &target) {

    if (_Hit_points != 0 && _Energy_points != 0) {
        std::cout << SCAV << _name << " attack " << target;
        std::cout << " causing " << _Attack_damage;
        std::cout << " points of damage" << std::endl;
        _Energy_points--;
        std::cout << SCAV << _name << " remaining " << _Energy_points << " energy Points!" << std::endl;
        return;
    }
    std::cout << SCAV << "["  <<_name;
    if (!_Energy_points)
        std::cout << "] has no more energy he can't do anything" << std::endl;
    else
        std::cout << "] has no more points he can't do anything" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {

    if (_Hit_points > 0 && _Energy_points > 0) {
        if (amount > _Hit_points)
            amount = _Hit_points;
        _Hit_points -= amount;
        std::cout << SCAV << _name << " take damage " << amount;
        std::cout << ": Hit points remaining " << _Hit_points << std::endl;
    }
}

void ScavTrap::beRepaired(unsigned int amount) {

    if (_Energy_points > 0) {
        std::cout << SCAV << _name << " repaired: ";
        std::cout << "new Hit points: " << _Hit_points + amount << std::endl;
        _Hit_points += amount;
        _Energy_points--;
        std::cout << SCAV << _name << " remaining " << _Energy_points << " energy Points!" << std::endl;
        return;
    }
    std::cout << SCAV << "[" <<_name;
    if (!_Energy_points)
        std::cout << "] has no more energy he can't do anything" << std::endl;
    else
        std::cout << "] has no more points he can't do anything" << std::endl;
}

void ScavTrap::guardGate() {

    //Cette fonction membre affichera un message informant que ScavTrap est entré en
    //mode Gate keeper.
    std::cout <<  SCAV << BLUE << " [" << this->_name;
    std::cout << "] mode Gate keeper" << RESET << std::endl;

}


