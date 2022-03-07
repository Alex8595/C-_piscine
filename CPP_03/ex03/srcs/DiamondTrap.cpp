/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 13:55:49 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/18 16:50:16 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

void		DiamondTrap::whoAmI()
{
	std::cout << "Hello! my name is " << DiamondTrap::name << ", and my Claptrap name is " << ClapTrap::name << std::endl;
}

std::string	DiamondTrap::getDiamondClapName()
{
	return (ClapTrap::name);
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}




/*
**	C & D
*/

void			DiamondTrap::operator=( DiamondTrap &o_class )
{
	DiamondTrap::name = o_class.name;
	ClapTrap::name = o_class.getDiamondClapName();
	this->hitPoints = o_class.hitPoints;
	this->energyPoints = o_class.energyPoints;
	this->attackDamage = o_class.attackDamage;
}

DiamondTrap::DiamondTrap( DiamondTrap &ref_to_copy )
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	DiamondTrap::operator=(ref_to_copy);
}

DiamondTrap::DiamondTrap(std::string g_name)
{
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
	DiamondTrap::name = g_name;
	ClapTrap::name = g_name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
	DiamondTrap::name = "Default";
	ClapTrap::name = DiamondTrap::name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

void		DiamondTrap::seeStats()
{
	std::cout << "Hit Points   : " << this->hitPoints    << "." << std::endl;
	std::cout << "Energy Points: " << this->energyPoints << "." << std::endl;
	std::cout << "Attack Damage: " << this->attackDamage << "." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}
