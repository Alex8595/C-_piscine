#include <iostream>
#include "Zombie.hpp"

void	Zombie::announce( void )
{
	std::cout << "<"<< this->_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}



// ************************************************************************** //
//                                 Sets & Gets                                //
// ************************************************************************** //

std::string		Zombie::get_name( void )
{
	return (this->_name);
}

void			Zombie::set_name( std::string name )
{
	this->_name = name;
}

// ************************************************************************** //
//                          Constructors & Destructors                        //
// ************************************************************************** //

Zombie::Zombie( std::string str )
{
	this->_name = str;
}


Zombie::Zombie( void )
{
	
}


Zombie::~Zombie( void )
{
	std::cout << "You caused the terrible and painfull death of " << this->get_name() << std::endl;
}