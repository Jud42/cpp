/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:53:36 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/03 18:29:24 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name() {
	
	std::cout << "Default Constructor is called" << std::endl;
}

Zombie::~Zombie() {

	std::cout << "Destructor is called" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {

	std::cout << "Default Constructor is called" << std::endl;
}

void	Zombie::announce(void) const {

	std::cout << _name << ": BraiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setter(std::string n) {
	
	_name = n;
	this->announce();
}
