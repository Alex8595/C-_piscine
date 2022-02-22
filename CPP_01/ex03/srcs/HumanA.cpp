/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:03:57 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 15:03:58 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void		HumanA::attack( void )
{
	std::cout << this->getName() << " attacks with his " << this->_weapon.getType() << std::endl;
}

/*
**                          Get & Set
*/

std::string		HumanA::getName( void )
{
	return (this->_name);
}

void			HumanA::setName( std::string c_name )
{
	this->_name = c_name;
}

/*
**							Con & Des
*/

HumanA::HumanA( std::string c_name, Weapon &c_weapon ) : _weapon(c_weapon)
{
	this->setName(c_name);
}

HumanA::~HumanA( void )
{

}
