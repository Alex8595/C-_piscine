/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:24:40 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/24 14:50:36 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void ft_leaks()
{
	system("leaks Brain");
	atexit(ft_leaks);
}

int main()
{
	//AAnimal instantiated_class_aanimal;
	
	AAnimal	*animals[4];

	for (int i = 0; i < 4; i++)
	{
		if (i % 2)
			animals[i] = new Dog(); 
		else
			animals[i] = new Cat();
	}

	std::cout << "_____ Test assignation operator _____" << std::endl;


	for (int i = 0; i < 2; i++)
		std::cout << animals[3]->getIdea(i) << std::endl;

	for (int i = 0; i < 2; i++)
	{
		animals[3]->setIdea("ZZZ zzz ...", i);
		std::cout << animals[3]->getIdea(i) << std::endl;
	}

	*(animals[1]) = *(animals[3]);

	for (int i = 0; i < 3; i++)
		std::cout << animals[1]->getIdea(i) << std::endl;


	std::cout << std::endl;
	std::cout << "_____        Destructors        _____" << std::endl;
	for (int i = 0; i < 2; i++)
		delete animals[i];
}
