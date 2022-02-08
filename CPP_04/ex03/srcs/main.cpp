/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:07:10 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/01 19:09:44 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main(void)
{
	MateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	//src->learnMateria(new Cure());
	std::cout << "\n";

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	//tmp = src->createMateria("cure");
	//me->equip(tmp);
	std::cout << "\n";

//	ICharacter* bob = new Character("bob");
//	me->use(0, *bob);
//	me->use(1, *bob);

//	delete bob;
	delete src;

	delete me;
	return (0);
}

/*	
	//	Character operator= test
	
	ICharacter* POP = new Character("POP");
	POP = me;
	POP->use(0, *bob);
*/