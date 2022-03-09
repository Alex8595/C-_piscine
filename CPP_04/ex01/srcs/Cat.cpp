/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:16:12 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/24 14:48:33 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

/*
**		New Member Functions 
*/

std::string		Cat::getIdea(int num)
{
	return (my_brain->getIdea(num));
}

void			Cat::setIdea(std::string idea, int num)
{
	my_brain->setIdea(idea, num);
}




/*
**		Old Member Functions 
*/

void			Cat::makeSound() const
{
	std::cout << "*Meow*" << std::endl;
}




/*
**	Operators
*/

void 			Cat::operator= (Animal &ref)
{
	std::cout << "Cat Assignation Operator Called" << std::endl;
	if (ref.getType() == "Cat")
	{
		Cat	*safeCat = dynamic_cast<Cat*>(&ref);
		for (int i = 0; i < 100; i++)
			this->setIdea(safeCat->getIdea(i), i);
	}
}




/*
**	Con & Des
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
	delete my_brain;
}
