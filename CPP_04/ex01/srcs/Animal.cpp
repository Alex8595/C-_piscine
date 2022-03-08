/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:36:13 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/21 15:54:33 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
**		New Member functions
*/

std::string	Animal::getIdea(int num)
{
	if (num)
		;
	return ("Animal getidea, thus, error");
}

void		Animal::setIdea(std::string idea, int num)
{
	if (num && idea.empty())
		;
	std::cout << "Error: can't set idea in animal class" << std::endl;
}




/*
**		Old Member functions
*/


std::string	Animal::getType() const 
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "*Generic Animal Sound*" << std::endl;
}




/*
**		Operator
*/

void	Animal::operator = (Animal &ref)
{
	std::cout << "Animal Assignation operator called" << std::endl;
	this->type = ref.type;
}




/*
**		Con & Des
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
