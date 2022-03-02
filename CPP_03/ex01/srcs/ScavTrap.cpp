/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:38:28 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/02 18:38:08 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/*
**		Member Functions
*/

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->name << " attacks " << target << " causing SURPRISING and INMENSE " << this->attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " has entered in ... GATE KEEPER MODE ! ! !" << std::endl;
}

/*
**	Con & Des
*/

void    ScavTrap::operator = ( const ScavTrap &o_class )
{
	std::cout << "ScavTrap Assignation operator overload called" << std::endl;

	this->name = o_class.name;
	this->hitPoints = o_class.hitPoints;
	this->energyPoints = o_class.energyPoints;
	this->attackDamage = o_class.attackDamage;
}

ScavTrap::ScavTrap( const ScavTrap &ref_to_copy )
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	ClapTrap::operator=(ref_to_copy);
}

ScavTrap::ScavTrap( const std::string par_name )
{
	std::cout << "ScavTrap Parameterized constructor called" << std::endl;
	this->name = par_name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->name = "Default";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}