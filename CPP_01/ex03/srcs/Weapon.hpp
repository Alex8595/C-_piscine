#include <iostream>

#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

// ************************************************************************** //
//                               Weapon  Class                                //
// ************************************************************************** //

class Weapon
{
	private:

	public:
		std::string				_type;
		void					setType( std::string str );
		const std::string		&getType( void );


		Weapon( void );
		Weapon( std::string c_str );
		~Weapon( void );
};

#endif