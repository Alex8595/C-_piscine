/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:24:40 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/21 16:28:55 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void ft_leaks()
{
	system("leaks Brain");
	atexit(ft_leaks);
}

int main()
{
	Animal	*animals[4];

	for (int i = 0; i < 4; i++)
	{
		if (i % 2)
			animals[i] = new Dog(); 
		else
			animals[i] = new Cat();
	}

	
	std::cout << std::endl;
	std::cout << "_____ Test assignation operator _____" << std::endl;



	for (int i = 0; i < 2; i++)
		std::cout << animals[1]->getIdea(i) << std::endl;

	for (int i = 0; i < 2; i++)
	{
		animals[0]->setIdea("ZZZ zzz ...", i);
		std::cout << animals[0]->getIdea(i) << std::endl;
	}

	*(animals[1]) = *(animals[0]);

	for (int i = 0; i < 2; i++)
		std::cout << animals[1]->getIdea(i) << std::endl;



	std::cout << std::endl;
	std::cout << "_____        Destructors        _____" << std::endl;
	for (int i = 0; i < 2; i++)
		delete animals[i];
}
