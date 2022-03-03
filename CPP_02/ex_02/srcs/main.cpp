/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:53:42 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/01 14:53:43 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	/*
	Fixed a;
	Fixed b(10);
	Fixed aux;

	a = 5;
	std::cout << std::endl;




	std::cout << "This is A: " << a << ".    This is B: "    << b << std::endl;
	std::cout << "__________ First Batch _________" << std::endl << std::endl;
	std::cout << ">, <, >=, <=, == and !=.       | " << std::endl << std::endl;

	std::cout << "A is bigger than b?            : " << std::endl << (a > b)  << std::endl << std::endl;

	std::cout << "A is smaller than b?           : " << std::endl << (a < b)  << std::endl << std::endl;

	std::cout << "A is bigger or equal than b?   : " << std::endl << (a >= b) << std::endl << std::endl;

	std::cout << "A is smaller or equal than b?  : " << std::endl << (a <= b) << std::endl << std::endl;

	std::cout << "A is equal than b?             : " << std::endl << (a == b) << std::endl << std::endl;

	std::cout << "A is different than b?         : " << std::endl << (a != b) << std::endl << std::endl;




	std::cout << "__________ Next Batch _________" << std::endl << std::endl;
	std::cout << "+, -, *, and /               | " << std::endl << std::endl;

	aux = (a + b);

	std::cout << "A + b is                       : " << std::endl << (aux)    << std::endl << std::endl;

	aux = (a - b);
	std::cout << "A - b is                       : " << std::endl << (aux)    << std::endl << std::endl;

	aux = (a * b);
	std::cout << "A * b is                       : " << std::endl << (aux)    << std::endl << std::endl;

	aux = (a / b);
	std::cout << "A / b is                       : " << std::endl << (aux)    << std::endl << std::endl;




	std::cout << "__________ Next Batch _________" << std::endl << std::endl;
	std::cout << "++x, x++, --x and x--        | " << std::endl << std::endl;

	a = 0;
	std::cout << "++a Before: " << a << ".Between: " << ++a << ".After: " << a << std::endl << std::endl;
	
	std::cout << "a++ Before: " << a << ".Between: " << a++ << ".After: " << a << std::endl << std::endl;




	a = 3;
	std::cout << "--a Before: " << a << ".Between: " << --a << ".After: " << a << std::endl << std::endl;
	
	std::cout << "a-- Before: " << a << ".Between: " << a-- << ".After: " << a << std::endl << std::endl;



	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
*/

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return (0);
}