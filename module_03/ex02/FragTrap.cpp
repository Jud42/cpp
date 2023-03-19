/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:04:31 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/09 19:41:51 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {

    std::cout << FRAG << "Constructor [" <<  _name << "] called" << std::endl;
}

FragTrap::~FragTrap() {

    std::cout << FRAG << "Destructor [" << _name << "] called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {

    std::cout << FRAG << "Constructor [" << this->_name << "] called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src) {
    
    _name = src._name;
    _Hit_points = src._Hit_points;
    _Energy_points = src._Energy_points;
    _Attack_damage = src._Attack_damage;
    std::cout << FRAG << "Constructor copy [" << _name << "] is called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {

    if (this != &rhs) {
        this->_name = rhs._name;
        this->_Hit_points = rhs._Hit_points;
        this->_Energy_points = rhs._Energy_points;
        this->_Attack_damage = rhs._Attack_damage;
    }
    std::cout << FRAG << "Operator assignment [" << _name << "] is called" << std::endl;
    return *this;
}

void FragTrap::attack(const std::string &target) {

    if (_Hit_points != 0 && _Energy_points != 0) {
        std::cout << FRAG << _name << " attack " << target;
        std::cout << " causing " << _Attack_damage;
        std::cout << " points of damage" << std::endl;
        _Energy_points--;
        std::cout << FRAG << _name << " remaining " << _Energy_points << " energy Points!" << std::endl;
        return;
    }
    std::cout << FRAG << "["  <<_name;
    if (!_Energy_points)
        std::cout << "] has no more energy he can't do anything" << std::endl;
    else
        std::cout << "] has no more points he can't do anything" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {

    if (_Hit_points > 0 && _Energy_points > 0) {
        if (amount > _Hit_points)
            amount = _Hit_points;
        _Hit_points -= amount;
        std::cout << FRAG << _name << " take damage " << amount;
        std::cout << ": Hit points remaining " << _Hit_points << std::endl;
    }
}

void FragTrap::beRepaired(unsigned int amount) {

    if (_Energy_points > 0) {
        std::cout << FRAG << _name << " repaired: ";
        std::cout << "new Hit points: " << _Hit_points + amount << std::endl;
        _Hit_points += amount;
        _Energy_points--;
        std::cout << FRAG << _name << " remaining " << _Energy_points << " energy Points!" << std::endl;
        return;
    }
    std::cout << FRAG << "[" <<_name;
    if (!_Energy_points)
        std::cout << "] has no more energy he can't do anything" << std::endl;
    else
        std::cout << "] has no more points he can't do anything" << std::endl;
}

void FragTrap::highFivesGuys(void) {

	std::cout << FRAG << BLUE << " [" << _name << "] Give me high fives Guys!";
	std::cout << RESET << std::endl;
}
