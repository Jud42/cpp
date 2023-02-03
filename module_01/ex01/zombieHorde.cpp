#include "Zombie.hpp" 

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*ptr_zomb = new Zombie[N];

	for (int i = 0; i < N; i++)
		ptr_zomb[i].setter(name);
	return (ptr_zomb);
}
