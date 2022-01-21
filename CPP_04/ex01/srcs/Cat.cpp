/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:16:12 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/21 16:20:57 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

std::string		Cat::getType() const
{
	return (this->type);
}

void			Cat::makeSound() const
{
	std::cout << "*Meow*" << std::endl;
}

std::string		Cat::getIdea(int num)
{
	return (this->my_brain->ideas[num]);
}

void			Cat::setIdea(std::string idea, int num)
{
	this->my_brain->ideas[num] = idea;
}

void 			Cat::operator= (Animal &ref)
{
	std::cout << "Cat Assignation operator Called" << std::endl;
	Cat	*newCat = dynamic_cast<Cat*>(&ref);
	for (int i = 0; i < 100; i++)
		this->setIdea(newCat->getIdea(i), i);
}

/*
**	C & D
*/

Cat::Cat(Cat &ref)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	this->my_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->setIdea(ref.getIdea(i), i);
	this->type = ref.type;
}

Cat::Cat()
{
	std::cout << "Cat Constructor Called" << std::endl;
	this->my_brain = new Brain();
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat Destruct Called" << std::endl;
	delete this->my_brain;
}
