/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:34:58 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/03 20:40:26 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {}

HumanB::HumanB(std::string name, const Weapon &wp)
	: name(name), weapon(&wp) {}

void	HumanB::setWeapon(const Weapon &wp) { weapon = &wp; }

void	HumanB::attack() const 
{
	std::cout << name << " attack with their "; 
	std::cout << weapon->getType() << std::endl; 
}

