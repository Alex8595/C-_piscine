#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		//attack
		ScavTrap(std::string name);
		~ScavTrap();
};

#endif