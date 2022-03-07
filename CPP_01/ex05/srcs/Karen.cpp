/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:51:43 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 15:51:44 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "The smell of fresh diet coke in the morning is just great!" << std::endl;
}

void Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "Some day they ought to put a recognition sign of me, I practclly made this place" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout <<  "How is it possible that i can't enter this property\
 this is a free country and those cookies are mine to take." << std::endl;
}

void Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the president now." << std::endl;
}

void Karen::complain( std::string level )
{
ww
	void(Karen::*function[4])() = { &Karen::debug, &Karen::info , &Karen::warning, &Karen::error };

	for (int i = 0; i < 4; i++)
	{
		if (states[i] == level)
			(*this.*function[i])();
	}
}

/*
**			Con & Des
*/

Karen::Karen( void )
{

}

Karen::~Karen()
{


}
