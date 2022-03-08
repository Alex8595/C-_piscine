/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:40:49 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/01 19:10:28 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*
**	Member Functions
*/

AMateria		*Ice::clone() const
{
	AMateria	*new_ice = new Ice();
	return (new_ice);
}




/*
**	Con & Des
*/

void				Ice::operator=(const Ice &ref)
{
	this->type = ref.getType();
}

Ice::Ice(const Ice &ref)
{
	this->type = ref.getType();
}

Ice::Ice()
{
	this->type = "ice";
}

Ice::~Ice()
{

}
