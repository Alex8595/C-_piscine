/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:09:18 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 15:09:19 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void		HumanB::attack()
{
	std::cout << this->getName() << " attacks with his " << this->_weapon->getType() << std::endl;
}

/*
**                                 Get & Set
*/
std::string		HumanB::getName( void )
{
	return (this->_name);
}

void			HumanB::setName( std::string c_name )
{
	this->_name = c_name;
}

void			HumanB::setWeapon( Weapon &c_weapon )
{
	this->_weapon = &c_weapon;
}

/*
**							Con & Des
*/

HumanB::HumanB( std::string c_name )
{
	this->setName(c_name);
}

HumanB::~HumanB( void )	{	}
