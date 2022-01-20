/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:36:13 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/20 16:03:47 by ahernand         ###   ########.fr       */
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

std::string	Animal::getIdea(int num)
{
	return ("Animal getidea, thus, error");
}

void		Animal::setIdea(std::string idea, int num)
{
	std::cout << "Error: can't set idea in animal class" << std::endl;
}

void	Animal::operator = (const Animal &ref)
{
	std::cout << "Animal Assignation operator called" << std::endl;
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
