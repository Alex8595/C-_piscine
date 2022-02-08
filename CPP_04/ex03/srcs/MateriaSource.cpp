/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:27:56 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/01 19:10:21 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void			MateriaSource::learnMateria(AMateria *mat)
{
	if (this->idx_learned > 3)
		std::cout << "This Materia Source is full, can't learn more Materia." << std::endl;
	else
	{
		this->inv_materias[idx_learned] = mat;
		std::cout << "Materia " << this->inv_materias[idx_learned]->getType() << " learned." << std::endl;
		this->idx_learned++;
	}
}

AMateria*		MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < idx_learned; i++)
	{
		if (this->inv_materias[i]->getType() == type)
		{
			std::cout << "Materia " << type << " created" << std::endl;
			if (type == "ice")
			{
				AMateria	*materia = new Ice;
				materia = this->inv_materias[i];
				return (materia);
			}
			if (type == "cure")
			{
				AMateria	*materia = new Cure;
				materia = this->inv_materias[i];
				return (materia);
			}
			
		}
	}
	std::cout << "This materia hasn't been leant" << std::endl;
	return (NULL);
}

/*
**		C & D
*/

void			MateriaSource::operator=(const MateriaSource &src)
{
	for	(int i = 0; i < 4 ; i++)
		this->inv_materias[i] = NULL;
	for (int j = 0; j < src.idx_learned; j++)
		this->inv_materias[j] = src.inv_materias[j];
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	this->idx_learned = src.idx_learned;
	for	(int i = 0; i < this->idx_learned; i++)
		this->inv_materias[i] = src.inv_materias[i];
}

MateriaSource::MateriaSource()
{
	idx_learned = 0;
	for	(int i = 0; i < 4 ; i++)
		this->inv_materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for	(int i = 0; i < idx_learned; i++)
		delete this->inv_materias[i];
}
