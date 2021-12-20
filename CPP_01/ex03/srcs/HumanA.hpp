#include <iostream>
#include "Weapon.hpp"

#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

// ************************************************************************** //
//                               Weapon  Class                                //
// ************************************************************************** //

class	HumanA
{
	private:
		std::string		_name;
		
	public:
		Weapon			*_weapon;
		void			attack( void );
		void			setName( std::string c_name );
		std::string		getName( void );


		HumanA( std::string c_name, Weapon &c_weapon );
		~HumanA( void );
};

#endif