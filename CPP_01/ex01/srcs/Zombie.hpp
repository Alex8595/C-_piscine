#include <iostream>

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Zombie
{
	private:
		std::string		_name;

	public:
		void			announce( void );
		void			set_name( std::string name );
		std::string		get_name( void );

		
		Zombie( std::string str );
		Zombie( void );
		~Zombie( void );
};