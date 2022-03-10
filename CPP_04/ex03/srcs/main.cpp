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

/*
void	ft_leaks()
{
	atexit(ft_leaks);
	system ("leaks Materia");
}
*/

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
	
	tmp = src->createMateria("cure");
	me->equip(tmp);




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




	/*
	** _______________________________________________ my tests ahead_______________________________________________
	*/




	std::cout << std::endl << "_____ Test deep copy Materia Src _____" << std::endl << std::endl;

	MateriaSource* _src = new MateriaSource();
	MateriaSource* _src2 = new MateriaSource();

	AMateria	*_new_cure;

	_new_cure = new Cure();
	_src->learnMateria(_new_cure);



	std::cout << std::endl;


	*(_src2) = *(_src);
	AMateria* _tmp = _src2->createMateria("cure");

	ICharacter* _me = new Character("me");
	ICharacter* _bob = new Character("bob");

	_me->equip(_tmp);
	_me->use(0, *_bob);



	std::cout << std::endl;


	delete _me;
	delete _bob;
	delete _src;
	delete _src2;

	delete _new_cure;



	std::cout << std::endl << "_____  Test deep copy Character  _____" << std::endl << std::endl;


	MateriaSource*	src_Cloud = new MateriaSource();
	AMateria		*new_cure_Cloud;

	new_cure_Cloud = new Cure();
	src_Cloud->learnMateria(new_cure_Cloud);
	AMateria* tmp_Cloud = src_Cloud->createMateria("cure");


	Character* Cloud = new Character("Cloud");
	Cloud->equip(tmp_Cloud);

	Character* POP = new Character("POP");


	std::cout << std::endl;

	*(POP) = *(Cloud);
	POP->use(0, *Cloud);

	std::cout << std::endl;

	delete Cloud;
	delete POP;
	delete src_Cloud;
	delete new_cure_Cloud;

	return (0);
}

