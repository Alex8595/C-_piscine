/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:16:12 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/20 16:02:09 by ahernand         ###   ########.fr       */
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

void 			Cat::operator= (const Cat &ref)
{
	std::cout << "Cat Assignation operator Called" << std::endl;
	(*this->my_brain) = ref.my_brain;
	this->type = ref.type;

}

std::string		Cat::getIdea(int num)
{
	return (this->my_brain->ideas[num]);
}

void			Cat::setIdea(std::string idea, int num)
{
	this->my_brain->ideas[num] = idea;
}

/*
**	C & D
*/

Cat::Cat(const Cat &ref)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	this->my_brain = ref.my_brain;
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
