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
	std::cout << "[ WARNING ]" << std::endl;
	std::cout <<  "How is it possible that i can enter this property\
 this is a free country and those cookies are mine to take." << std::endl;
}

void Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the president now." << std::endl;
}



/*
**	Complain
*/

void Karen::complain( std::string level )
{
	int				j;
	std::string		states[4] = { "debug" , "info" , "warning", "error"};
	void			(Karen::*ft_karen[4])() = { &Karen::debug, &Karen::info , &Karen::warning, &Karen::error };

	for (int i = 0; i < 4; i++)
	{
		if (states[i] == level)
			j = i;
	}
	switch (j)
	{
		case 0:
			(*this.*ft_karen[0])();
		case 1:
			(*this.*ft_karen[1])();
		case 2:
			(*this.*ft_karen[2])();
		case 3:
			(*this.*ft_karen[3])();
	}
}

Karen::Karen( void ) {	}

Karen::~Karen()	{	}