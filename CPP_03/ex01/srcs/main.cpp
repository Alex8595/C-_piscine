#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap	Serena("Serena");
	ScavTrap	Marina;

	Marina = Serena;
	std::cout << std::endl;
	Serena.attack("Ganon");
	Serena.beRepaired(13);
	Serena.guardGate();

	std::cout << std::endl;
	Marina.attack("Pointy Rock");
	
	std::cout << std::endl;
	return (0);
}
