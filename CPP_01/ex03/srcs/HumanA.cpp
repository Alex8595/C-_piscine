#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"


void		HumanA::attack( void )
{
	std::cout << this->getName() << " attacks with his " << this->_weapon->_type << std::endl;
}

// ************************************************************************** //
//                                 Get & Set                                  //
// ************************************************************************** //

std::string		HumanA::getName( void )
{
	return (this->_name);
}

void			HumanA::setName( std::string c_name )
{
	this->_name = c_name;
}

// ************************************************************************** //
//                          Constructors & Destructors                        //
// ************************************************************************** //


HumanA::HumanA( std::string c_name, Weapon &c_weapon )
{
	this->setName(c_name);
	this->_weapon = &c_weapon;
}

HumanA::~HumanA( void )	{	}