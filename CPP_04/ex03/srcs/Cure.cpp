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

#include "Cure.hpp"

/*
**	Member Functions
*/

AMateria		*Cure::clone() const
{
	AMateria	*new_cure = new Cure();
	return (new_cure);
}




/*
**	Con & Des
*/

void				Cure::operator=(const Cure &ref)
{
	this->type = ref.getType();
}

Cure::Cure(const Cure &ref)
{
	this->type = ref.getType();
}

Cure::Cure()
{
	this->type = "cure";
}

Cure::~Cure()
{

}
