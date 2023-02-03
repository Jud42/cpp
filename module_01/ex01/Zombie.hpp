#ifndef _ZOMBIE_
 # define _ZOMBIE_

#include <iostream>

class	Zombie
{
	public:
		Zombie() {}
		void	announce(void) const;
		void	setter(std::string n) {name = n;}
		~Zombie() {
			std::cout << name << " was destroyed" << std::endl;}
	private:
		std::string	name;
};

Zombie *zombieHorde(int N, std::string name);


#endif
