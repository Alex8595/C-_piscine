/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:12:33 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/17 17:08:13 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
**		Member Functions
*/

void			Dog::makeSound() const
{
	std::cout << "*Guau*" << std::endl;
}




/*
**		Operators
*/

void			Dog::operator= (const Dog &ref)
{
	std::cout << "Dog Assignation Operator called" << std::endl;
	this->type = ref.type;
}




/*
**	C & D
*/

Dog::Dog(const Dog &ref)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	this->type = ref.type;
}

Dog::Dog()
{
	std::cout << "Dog Constructor Called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog Destruct Called" << std::endl;
}
