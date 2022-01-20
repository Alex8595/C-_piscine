/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:24:40 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/20 17:14:19 by ahernand         ###   ########.fr       */
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

	Animal	*animals[2];

	animals[0] = new Cat();
	animals[1] = new Cat();
	std::cout << "\n";

	*(animals[0]) = *(animals[1]);













/*

	Animal	*animals[2];
	
	for (int i = 0; i < 2; i++)
	{
//		if (i % 2)
//			animals[i] = new Dog(); 
//		else
			animals[i] = new Cat();
	}
	std::cout << std::endl;
	std::cout << "_____ Test assignation operator _____" << std::endl;

	*(animals[0]) = *(animals[1]);
	
//	animals[0]->setIdea("ZZZ zzz ...", 0);	
//	std::cout << animals[0]->getIdea(0) << std::endl;
	

	std::cout << std::endl;
	std::cout << "_____        Destructors        _____" << std::endl;
	for (int i = 0; i < 2; i++)
		delete animals[i];
	*/
}
