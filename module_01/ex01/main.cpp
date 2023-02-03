#include "Zombie.hpp"

int	main()
{
	Zombie	*new_z;
	int	N = 3;

	//create a tab Zombie and return a pointer to the first zombie
	new_z = zombieHorde(N, "test");

	//test with announce
	for (int i = 0; i < N; i++)
		new_z[i].announce();

	//destructor zombie 
	delete[] new_z;
	return 0;
}
