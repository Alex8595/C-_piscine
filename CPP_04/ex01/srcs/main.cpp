/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:24:40 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/19 17:34:26 by ahernand         ###   ########.fr       */
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
	Animal	animals[100];
	
	animals[0].makeSound();


	std::cout << std::endl;
	std::cout << "_____ Test assignation operator _____" << std::endl;

/*
	for (int i = 0; i < 100; i++)
	{
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog(); 
	}
*/


	std::cout << std::endl;
	std::cout << "_____        Destructors        _____" << std::endl;

}

//	for (int i = 0; i < 20; i++)
//		cat1->my_brain->ideas[i] = "ZZZ zzz ...";
//	cat1 = cat2;
//	for (int i = 0; i < 20; i++)
//		std::cout << cat1->my_brain->ideas[i] << std::endl;
