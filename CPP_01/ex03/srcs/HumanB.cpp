#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

void		HumanB::attack()
{
	std::cout << this->getName() << " attacks with his " << this->_weapon->getType() << std::endl;
}

// ************************************************************************** //
//                                 Get & Set                                  //
// ************************************************************************** //

std::string		HumanB::getName( void )
{
	return (this->_name);
}

void			HumanB::setName( std::string c_name )
{
	this->_name = c_name;
}

void			HumanB::setWeapon( Weapon &c_weapon )
{
	this->_weapon = &c_weapon;
}


// ************************************************************************** //
//                          Constructors & Destructors                        //
// ************************************************************************** //


HumanB::HumanB( std::string c_name )
{
	this->setName(c_name);
}

HumanB::~HumanB( void )	{	}