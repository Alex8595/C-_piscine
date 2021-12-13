#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
	Zombie	Doh("Doh");
	
	Doh.announce();
	
	Zombie *asd = newZombie("Alish");

	randomChump("Casio");

	delete asd;

	return (0);
}