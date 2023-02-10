#ifndef _WEAPON_
 # define _WEAPON_

#include <iostream>

class	Weapon
{
	public:
		Weapon() {} 
		Weapon(std::string type); 

			//getters
		const std::string& getType() const;
			//setters
		void setType(std::string type);

	private:
		std::string type;
};

#endif
