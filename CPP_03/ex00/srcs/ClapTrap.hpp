#include <iostream>

class ClapTrap
{
	private:
		std::string		name;
		int				hitPoints;
		int				energyPoints;
		int				attackDamage;
		
	public:
		void			attack(std::string const &target);
		void			beRepaired(unsigned int amount);
		void			takeDamage(unsigned int amount);
};