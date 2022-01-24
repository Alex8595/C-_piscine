/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:12:33 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/24 14:48:51 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

std::string		Dog::getType() const
{
	return (this->type);
}

void			Dog::makeSound() const
{
	std::cout << "*Guau*" << std::endl;
}

std::string		Dog::getIdea(int num)
{
	return (this->my_brain->ideas[num]);
}

void			Dog::setIdea(std::string idea, int num)
{
	this->my_brain->ideas[num] = idea;
}

void			Dog::operator= (Animal &ref)
{
	std::cout << "Dog Assignation Operator Called" << std::endl;
	if (ref.getType() == "Dog")
	{
		Dog	*newDog = dynamic_cast<Dog*>(&ref);
		for (int i = 0; i < 100; i++)
			this->setIdea(newDog->getIdea(i), i);
	}
}

/*
**	C & D
*/

Dog::Dog(Dog &ref)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	this->my_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->setIdea(ref.getIdea(i), i);
	this->type = ref.type;
}

Dog::Dog()
{
	std::cout << "Dog Constructor Called" << std::endl;
	this->my_brain = new Brain();
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog Destruct Called" << std::endl;
	delete this->my_brain;
}
