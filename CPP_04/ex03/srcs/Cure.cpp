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

AMateria		*Cure::clone() const
{
	AMateria	*new_cure = new Cure();
	return (new_cure);
}

/*
**	C & D
*/

void				Cure::operator=(const Cure &ref)
{
	this->type = ref.type;
}

Cure::Cure(const Cure &ref)
{
	this->type = ref.type;
}

Cure::Cure()
{
	this->type = "cure";
}

Cure::~Cure()
{

}
