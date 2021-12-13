#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*horde;
	int		i;

	i = 0;
	horde = new Zombie[N]; 
	while (i < N)
	{
		horde[i].set_name(name + " " + std::to_string(i + 1));
		i++;
	}
	return (horde);
}