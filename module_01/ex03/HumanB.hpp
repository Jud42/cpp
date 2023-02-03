#ifndef _HUMANB_
 #define _HUMANB_

#include "Weapon.hpp"

class HumanB
{
	public:
		//interface methods
		HumanB(std::string name);
		HumanB(std::string name, Weapon wp); 
		void setWeapon(Weapon wp);
		void attack();
		//attributs
		Weapon weap_;
		std::string name_;
};

#endif
