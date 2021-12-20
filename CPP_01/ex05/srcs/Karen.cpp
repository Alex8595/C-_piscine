#include "Karen.hpp"

void Karen::debug( void )
{
	std::cout << "DEBUG!" << std::endl;
}

void Karen::info( void )
{
	std::cout << "INFO!" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "WARNING!" << std::endl;
}

void Karen::error( void )
{
	std::cout << "ERROR!" << std::endl;
}

void hi()
{
	std::cout << "hi" << std::endl;
}	

void Karen::complain( std::string level )
{
	void (Karen::*function)();
	void (*ft_hi)()= &hi;
	ft_hi();
	
	if (level == "debug")
		function = &Karen::debug;
	if (level == "info")
		function = &Karen::info;
	if (level == "warning")
		function= &Karen::warning;
	if (level == "error")
		function = &Karen::error;
	
	(*this.*function)();
}

Karen::Karen( void ) {	}

Karen::~Karen()	{	}