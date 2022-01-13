/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:59:54 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/13 18:17:16 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

/*
**		Member Functions
*/

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " takes " << amount << " damage points!" << std::endl;

	if (this->hitPoints <= 0)
		this->hitPoints = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoints = amount;
	std::cout << "ClapTrap " << this->name << " has been repared to completion and now has: " << this->hitPoints<< " hit points!" << std::endl;
}

/*
**	 C & D
*/

ClapTrap::ClapTrap()
{
	std::cout << "ClatTrap Default constructor called" << std::endl;
	this->name = "Default";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap( const std::string par_name )
{
	std::cout << "ClapTrap Parameterized constructor called" << std::endl;
	this->name = par_name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

void 	ClapTrap::operator = ( const ClapTrap &o_class )
{
	std::cout << "ClapTrap Assignation operator overload called" << std::endl;

	this->name = o_class.name;
	this->hitPoints = o_class.hitPoints;
	this->energyPoints = o_class.energyPoints;
	this->attackDamage = o_class.attackDamage;
}

ClapTrap::ClapTrap( const ClapTrap &ref_to_copy )
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	ClapTrap::operator=(ref_to_copy);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}
