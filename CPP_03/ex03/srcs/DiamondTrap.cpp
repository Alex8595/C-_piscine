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

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

void		DiamondTrap::whoAmI()
{
	std::cout << "Hello! my name is " << DiamondTrap::name << ", and my Claptrap name is " << ClapTrap::name << std::endl;
}

/*
**	C & D
*/

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
	DiamondTrap::name = "Default";
	ClapTrap::name = DiamondTrap::name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = 50;
	this->attackDamage = FragTrap::attackDamage ;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}
