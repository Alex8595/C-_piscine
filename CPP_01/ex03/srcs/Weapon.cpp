/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:54:41 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 14:54:42 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*
**		Get & Set
*/

void			Weapon::setType( std::string str )
{
	this->_type = str;
}

const std::string		&Weapon::getType( void )
{
	const std::string	&ref = this->_type;
	return (ref);
}

/*
**		C & D
*/

Weapon::Weapon( std::string c_str )
{
	setType(c_str);
}

Weapon::Weapon( void )
{

	setType("Default");
}

Weapon::~Weapon( void )
{

}
