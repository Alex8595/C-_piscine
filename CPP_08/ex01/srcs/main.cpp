/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:04:06 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/22 14:04:07 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << std::endl << std::endl << std::endl << "_________ Add too many __________" << std::endl << std::endl;

	try
	{
		Span sp = Span(1);
		sp.addNumber(5);
		sp.addNumber(6);
	
		std::cout << std::endl << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::cout << std::endl << std::endl << std::endl << "_________ Span not enough __________" << std::endl << std::endl;

	try
	{
		Span sp = Span(1000);
		sp.addNumber(5);
	
		std::cout << std::endl << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}




	std::cout << std::endl << std::endl << std::endl << "_________ Span sucess __________" << std::endl << std::endl;

	Span sp1 = Span(10);
	int	ran;

	srand(time( NULL ));
	for (int i = 0; i < 10; i++)
	{
		ran = rand() % 501;
		std::cout << ran << std::endl;
		sp1.addNumber(ran);
	}

	std::cout << std::endl << "Result : "<< sp1.shortestSpan() << std::endl;
	std::cout << std::endl << "Result : "<< sp1.longestSpan() << std::endl;


	std::cout << std::endl << std::endl << std::endl << "_________ Huge Span sucess __________" << std::endl << std::endl;

	Span sp2 = Span(1000000);

	srand(time( NULL ));
	for (int i = 0; i < 1000000; i++)
	{
		ran = rand() % 1000000;

		sp2.addNumber(ran);
	}

	std::cout << std::endl << "Result : "<< sp2.shortestSpan() << std::endl;
	std::cout << std::endl << "Result : "<< sp2.longestSpan() << std::endl;




	std::cout << std::endl << std::endl << std::endl << "_________ Main given __________" << std::endl << std::endl;

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;




	std::cout << std::endl << std::endl << std::endl << "_________ Iterator range Add number __________" << std::endl << std::endl;

	Span sp3 = Span(50);
	std::vector<int>		v(5, 0);

	v[0] = 5;
	v[1] = 3;
	v[2] = 17;
	v[3] = 9;
	v[4] = 11;

	std::vector<int>::iterator		it = v.begin();
	std::vector<int>::iterator		ite = v.end();

	sp3.addNumber(it, ite);

	std::cout << std::endl << "Result : "<< sp3.shortestSpan() << std::endl;
	std::cout << std::endl << "Result : "<< sp3.longestSpan() << std::endl;

	return (0);
}