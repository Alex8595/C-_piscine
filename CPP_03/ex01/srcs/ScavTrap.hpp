#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		void            attack(std::string const &target);
		void			guardGate();
		void        	operator = ( const ScavTrap &o_class );

		ScavTrap( const ScavTrap &ref_to_copy );
		ScavTrap(std::string name);
		ScavTrap();
		~ScavTrap();
};

#endif
