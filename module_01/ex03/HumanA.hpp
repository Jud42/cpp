#ifndef _HUMANA_
 #define _HUMANA_

#include "Weapon.hpp"

class HumanA
{
	public:
		//interface methods
		HumanA(std::string name, Weapon &wp);
		void attack();
		
		//attributs	
		Weapon &weap_;
		std::string name_;
};

#endif
