#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wp) 
	: name(name), weapon(wp) {}

void HumanA::attack()
{
	std::cout << name << " attack with their "; 
	std::cout << weapon.getType() << std::endl;  
}
