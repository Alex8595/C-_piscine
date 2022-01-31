/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:27:56 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/31 19:10:47 by ahernand         ###   ########.fr       */
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
		idx_learned++;
	}
}


AMateria*		MateriaSource::createMateria(std::string const & type)
{
	std::cout << "created" << std::endl;
}


/*
**		C & D
*/

MateriaSource::MateriaSource()
{
	idx_learned = 0;
	for	(int i = 0; i < 4 ; i++)
		this->inv_materias[i] = NULL;
}


MateriaSource::~MateriaSource()
{

}
