#include <iostream>
#include "./Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
	int		N;
	int		i;
	Zombie	*z_ptr;

	i = 0;
	N = 42;
	z_ptr = zombieHorde(N, "Zombie");

	while (i < N)
	{
		z_ptr[i].announce();
		i++;
	}

	delete [] z_ptr;

	return(0);
}