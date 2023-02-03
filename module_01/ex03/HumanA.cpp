#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wp) : name_(name), weap_(wp) {}
void HumanA::attack()
{
	std::cout << name_ << " attack with their "; 
	std::cout << weap_.getType() << std::endl;  
}
