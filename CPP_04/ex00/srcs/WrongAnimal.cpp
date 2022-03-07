/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:40:22 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/07 16:40:24 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
**		Member Functions
*/

std::string	WrongAnimal::getType() const 
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "*Generic Wrong Animal Sound*" << std::endl;
}




/*
**		Operators
*/

void	WrongAnimal::operator = (const WrongAnimal &ref)
{
	std::cout << "Wrong Animal Assignation operator called" << std::endl;
	this->type = ref.type;
}




/*
**	C & D
*/

WrongAnimal::WrongAnimal(const WrongAnimal &ref)
{
	std::cout << "Wrong Animal Copy Constructor called" << std::endl;
	this->type = ref.type;
}

WrongAnimal::WrongAnimal()
{
	std::cout << "Wrong Animal Default Constructor called" << std::endl;
	this->type = "Wrong Animal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal Destructor called" << std::endl;
}
