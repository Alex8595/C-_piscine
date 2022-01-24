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

#include "AAnimal.hpp"

void	AAnimal::operator = (AAnimal &ref)
{
	std::cout << "Animal Assignation operator called" << std::endl;
	this->type = ref.type;
}

/*
**	C & D
*/

AAnimal::AAnimal(const AAnimal &ref)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	this->type = ref.type;
}

AAnimal::AAnimal()
{
	std::cout << "Animal Default Constructor called" << std::endl;
	this->type = "Animal";
}

AAnimal::~AAnimal()
{
	std::cout << "Animal Destructor called" << std::endl;
}
