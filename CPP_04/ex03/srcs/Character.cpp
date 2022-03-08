/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:09:50 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/01 19:10:32 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
**		Member Functions
*/

void				Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << "NULL materia passed as reference." << std::endl;
	}
	else if (idk_filled > 3)
	{
		std::cout << getName() << "'s Materia inventary is full, can't equip more Materia." << std::endl;
	}
	else
	{
		inv_materias[idk_filled] = m->clone();
		std::cout << this->getName() << " equipped the " << inv_materias[idk_filled]->getType() << " materia!" << std::endl ;
		idk_filled++;
	}
}

void				Character::unequip(int idx)
{
	if (idx < 0 || idx > idk_filled)
	{
		std::cout << "No Materia Found at that index" << std::endl;
	}
	else
	{
		inv_materias[idk_filled] = NULL;
		// ASOIDJOIA SJDOIJ SAOIDJ ASPRIBLE HERE YOU AHVE TO REORDER THE SHIT HOLE IDIOT 
		std::cout << "Materia unequiped." << std::endl;
		idk_filled--;
	}
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > idk_filled)
		std::cout << "No Materia Found at that index" << std::endl;
	else
	{
		inv_materias[idx]->use(target);
	}
}




/*
**		Get & Set
*/

std::string const	&Character::getName() const
{
	return (this->name);
}




/*
**		Operators
*/

void	Character::operator=(const Character &ref)
{
	name = ref.name;

	idk_filled = ref.idk_filled;
	
	for	(int i = 0; i < 4 ; i++)
		inv_materias[i] = NULL;
	
	for (int j = 0; j < ref.idk_filled; j++)
		inv_materias[j] = ref.inv_materias[j];
}




/*
**		Con & Des
*/

Character::Character(const Character &ref)
{
	name = ref.name;

	idk_filled = ref.idk_filled;

	for (int i = 0 ; i < 4; i++)
		inv_materias[i] = NULL;

	for (int j = 0; j < ref.idk_filled; j++)
		inv_materias[j] = ref.inv_materias[j];
}

Character::Character(const std::string &ref)
{
	name = ref;

	idk_filled = 0;

	for (int i = 0 ; i < 4; i++)
		inv_materias[i] = NULL;
}

Character::Character()
{
	name = "Default";

	idk_filled = 0;

	for (int i = 0 ; i < 4; i++)
		inv_materias[i] = NULL;
}

Character::~Character()
{
	for	(int i = 0; i < idk_filled; i++)
		delete inv_materias[i];

	std::cout << "Materias stored in Character deleted" << std::endl; 
}
