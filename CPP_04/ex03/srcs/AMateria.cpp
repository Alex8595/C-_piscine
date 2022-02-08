/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:52:38 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/01 19:12:06 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

std::string const &AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	if (getType() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
	if (getType() == "cure")
		std::cout << "* heals " << target.getName() <<  "'s wounds *" << std::endl;
}

/*
**	C & D
*/

void	AMateria::operator=(const AMateria &ref)
{
	this->type = ref.type;
}

AMateria::AMateria(const AMateria &ref)
{
	this->type = ref.type;
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::AMateria()
{
	this->type = "Default";
}

AMateria::~AMateria()
{
}
