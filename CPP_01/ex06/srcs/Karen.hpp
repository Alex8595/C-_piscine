#ifndef __KAREN_HPP__
# define __KAREN_HPP__
# include <iostream>

class Karen
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
	public:
		void error( void );
		void complain( std::string level );



		Karen( void );
		~Karen();
};

#endif