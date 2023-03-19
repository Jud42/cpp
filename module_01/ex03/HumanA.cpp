/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:34:52 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/03 20:46:48 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wp) 
	: name(name), weapon(wp) {}

void HumanA::attack() const {

	std::cout << name << " attack with their "; 
	std::cout << weapon.getType() << std::endl;  
}
