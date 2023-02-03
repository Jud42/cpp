#include "Zombie.hpp"

int	main()
{
	Zombie	*new_z;

	//create a new zombie and return a pointer to it
	new_z = newZombie("new_zombie");
	
	//announce a zombie
	new_z->announce();

	//create and announce a zombie
	randomChump("random_zombie");

	//destructor zombie 
	std::cout << "new_zombie: Destroyed!" << std::endl;
	delete new_z;
	return 0;
}
