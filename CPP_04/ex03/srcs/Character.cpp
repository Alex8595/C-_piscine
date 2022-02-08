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

std::string const	&Character::getName() const
{
	return (this->name);
}

void				Character::equip(AMateria* m)
{
	if (n_filled > 3)
		std::cout << getName() << "'s Materia inventary is full, can't equip more Materia." << std::endl;
	else
	{
		inv_materias[n_filled] = m;
		std::cout << "HELLOOOOOOOO"<< inv_materias[n_filled]->getType() << std::endl ;
		std::cout << "Materia equiped." << std::endl;
		n_filled++;
	}
}


void				Character::unequip(int idx)
{
	if (idx < 0 || idx > n_filled)
		std::cout << "No Materia Found at that index" << std::endl;
	else
	{
		inv_materias[n_filled] = NULL;
		std::cout << "Materia unequiped." << std::endl;
		n_filled--;
	}
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > n_filled)
		std::cout << "No Materia Found at that index" << std::endl;
	else
	{
		inv_materias[idx]->use(target);
	}
}

/*
**			C & D
*/

void	Character::operator=(const Character &ref)
{
	name = ref.name;
	n_filled = ref.n_filled;
	for	(int i = 0; i < 4 ; i++)
		inv_materias[i] = NULL;
	for (int j = 0; j < ref.n_filled; j++)
		inv_materias[j] = ref.inv_materias[j];
}

Character::Character(const Character &ref)
{
	name = ref.name;
	n_filled = ref.n_filled;
	for (int i = 0 ; i < 4; i++)
		inv_materias[i] = NULL;
	for (int j = 0; j < ref.n_filled; j++)
		inv_materias[j] = ref.inv_materias[j];
}

Character::Character(const std::string &ref)
{
	name = ref;
	n_filled = 0;
	for (int i = 0 ; i < 4; i++)
		inv_materias[i] = NULL;
}

Character::Character()
{
	name = "Default";
	n_filled = 0;
	for (int i = 0 ; i < 4; i++)
		inv_materias[i] = NULL;
}

Character::~Character()
{
	for	(int i = 0; i < n_filled; i++)
	{
		std::cout << "Deleating number " << i << std::endl;
		delete inv_materias[i];
	}
	std::cout << "Deleation ended" << std::endl;
}
