#include <iostream>
#include "ClapTrap.hpp"

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap" << this->name << "attacks" << target << "causing" << this->attackDamage << "points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoints = 10;
	std::cout << "ClapTrap has been repared to completion and now has: " << this->hitPoints<< " hit points." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	std::cout << "ClapTrap takes " << amount << " damage points." << std::endl;

	if (this->hitPoints <= 0)
		this->hitPoints = 0;
}