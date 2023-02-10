#include "HumanB.hpp"

void	HumanB::setWeapon(const Weapon &wp) { weapon = &wp; }

void	HumanB::attack() 
{
	std::cout << name << " attack with their "; 
	std::cout << weapon->getType() << std::endl; 
}

