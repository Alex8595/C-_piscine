/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:36:13 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/17 17:08:16 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string	Animal::getType() const 
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "*Generic Animal Sound*" << std::endl;
}

void	Animal::operator = (const Animal &ref)
{
	std::cout << "Assignation operator called" << std::endl;
	this->type = ref.type;
}

/*
**	C & D
*/

Animal::Animal(const Animal &ref)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	this->type = ref.type;
}

Animal::Animal()
{
	std::cout << "Animal Default Constructor called" << std::endl;
	this->type = "Animal";
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}
