#include <iostream>
#include "Weapon.hpp"

#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

// ************************************************************************** //
//                               Weapon  Class                                //
// ************************************************************************** //

class	HumanB
{
	private:
		std::string		_name;
		Weapon			*_weapon;
		
	public:
		void			attack( void );
		void			setName( std::string c_name );
		std::string		getName( void );
		void			setWeapon( Weapon &c_weapon );


		HumanB( std::string c_name );
		~HumanB( void );
};

#endif