#ifndef _ZOMBIE_
 # define _ZOMBIE_

#include <iostream>

class	Zombie
{
	public:
		Zombie(std::string name)  : name(name) {}
		void	announce(void) const;
		~Zombie(){
			std::cout << name << " was destroyed" << std::endl;}
	private:
		std::string	name;
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);


#endif
