#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/*
**	Constructors
*/

ScavTrap::ScavTrap( const std::string par_name )
{
	std::cout << "Parameterized constructor called" << std::endl;
	this->name = par_name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called" << std::endl;
}