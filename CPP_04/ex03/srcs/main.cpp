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

#include "MateriaSource.hpp"
#include "Character.hpp"

void	ft_leaks()
{
	system ("leaks Materia");
	atexit(ft_leaks);
}

int main(void)
{

	std::cout << std::endl << "_____        Constructors        _____" << std::endl << std::endl;

	MateriaSource* src = new MateriaSource();

	///			Added to avoid leaks
	AMateria	*new_ice = new Ice();
	AMateria	*new_cure = new Cure();


	src->learnMateria(new_ice);
	src->learnMateria(new_cure);

	ICharacter* me = new Character("me");

	AMateria* tmp;



	std::cout << std::endl << "_____   Create & Assign Materia  _____" << std::endl << std::endl;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	
	delete tmp;

	tmp = src->createMateria("cure");
	me->equip(tmp);

	delete tmp;



	std::cout << std::endl << "_____        Character           _____" << std::endl << std::endl;

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);




	std::cout << std::endl << "_____        Destructors         _____" << std::endl << std::endl;

	delete bob;
	delete me;
	delete src;

	delete new_ice;
	delete new_cure;

	return (0);
}

/*	
	//	Character operator= test
	
	ICharacter* POP = new Character("POP");
	POP = me;
	POP->use(0, *bob);
*/