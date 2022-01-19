/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:32:39 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/19 14:54:04 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

void	Brain::ft_init_ideas()
{
	for	(int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			this->ideas[i] = "*Food is yummy  " + std::to_string(i) + "*";
		else
			this->ideas[i] = "*Feeling sleepy " + std::to_string(i) + "*";
	}
}

void	Brain::operator=(const Brain *ref)
{
	std::cout << "Brain Assignation operator Called" << std::endl;
	for	(int i = 0; i < 100; i++)
	{
		this->ideas[i] = ref->ideas[i];
	}
}

/*
**		C & D
*/

Brain::Brain(const Brain &ref)
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	for	(int i = 0; i < 100; i++)
	{
		this->ideas[i] = ref.ideas[i];
	}
}

Brain::Brain()
{
	std::cout << "Brain Constructor Called" << std::endl;
	ft_init_ideas();
}


Brain::~Brain()
{
	std::cout << "Brain Destructor Called" << std::endl;
}
