/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:09:50 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/31 18:07:01 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string const		&Character::getName() const
{
	return (this->name);
}

void					Character::equip(AMateria* m)
{

}


void					Character::unequip(int idx)
{

}

void					Character::use(int idx, ICharacter& target)
{

}

/*
**			C & D
*/

/*void					operator=(Character &ref)
{

}

Character::Character(const Character &ref)
{

}
*/

Character::Character()
{
	std::cout << "Character constructor" << std::endl;

}

Character::~Character()
{


}
