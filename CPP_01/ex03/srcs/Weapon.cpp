#include <iostream>
#include "Weapon.hpp"

// ************************************************************************** //
//                                 Get & Set                                  //
// ************************************************************************** //

void			Weapon::setType( std::string str )
{
	this->_type = str;
}

const std::string		&Weapon::getType( void )
{
	const std::string		&ref = this->_type;
	return(ref);
}



// ************************************************************************** //
//                          Constructors & Destructors                        //
// ************************************************************************** //

Weapon::Weapon( std::string c_str )
{
	setType(c_str);
}

Weapon::Weapon( void )	{	}

Weapon::~Weapon( void )	{	}