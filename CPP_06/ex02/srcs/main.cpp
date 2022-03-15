/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:12:29 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/12 18:12:30 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	srand(time( NULL ));

	int ran = rand() % 3 + 1;
	if (ran == 1)
		return (new A);
	if (ran == 2)
		return (new B);
	else
		return (new C);
}

void identify(Base* p)
{
	A *a1 = dynamic_cast<A*>(p);
	B *b1 = dynamic_cast<B*>(p);
	C *c1 = dynamic_cast<C*>(p);

	if (a1 != NULL)
		std::cout << "By pointer:    This is a A type class." << std::endl;
	else if (b1 != NULL)
		std::cout << "By pointer:    This is a B type class." << std::endl;
	else if (c1 != NULL)
		std::cout << "By pointer:    This is a C type class." << std::endl;
	else
		std::cout << "By pointer:    It's not an A, B or C class." << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a1 = dynamic_cast<A&>(p);
		std::cout << "By reference:  This is a A type class." << std::endl;
		if (&a1 == &a1)
			;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		B &b1 = dynamic_cast<B&>(p);
		std::cout << "By reference:  This is a B type class." << std::endl;
		if (&b1 == &b1)
			;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		C &c1 = dynamic_cast<C&>(p);
		std::cout << "By reference:  This is a C type class." << std::endl;
		if (&c1 == &c1)
			;
	}
	catch (std::bad_cast &bc)
	{
	}
	
}

int main()
{
	Base	*_base;

	_base = generate();
	identify(_base);
	identify(*(_base));

	delete _base;
	return (0);
}