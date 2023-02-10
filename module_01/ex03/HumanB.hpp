#ifndef _HUMANB_
 #define _HUMANB_

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name, const Weapon &wp=Weapon())
			: name(name), weapon(&wp) {}

		//setters
		void setWeapon(const Weapon &wp);
		//getters
		void attack();

	private:
		const Weapon *weapon;
		std::string name;
};

#endif
