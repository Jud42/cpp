#include "HumanB.hpp"

//constructor methods
HumanB::HumanB(std::string name) : name_(name) {}

HumanB::HumanB(std::string name, Weapon wp) : name_(name) , weap_(wp) {}

//implementation methods
void	HumanB::setWeapon(Weapon wp) {weap_ = wp;}

void	HumanB::attack() 
{
	const std::string &type = weap_.getType();
	std::cout << name_ << " attack with their "; 
	if (type != "null")
		std::cout << type;
	std::cout << std::endl;  
}
