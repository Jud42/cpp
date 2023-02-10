#ifndef _HUMANA_
 #define _HUMANA_

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &wp);

		//getters
		void attack();

	private:
		Weapon &weapon;
		std::string name;
};

#endif
