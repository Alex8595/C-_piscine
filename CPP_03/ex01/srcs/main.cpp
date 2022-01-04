#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap bot_a("Jenner");
	ClapTrap bot_b(bot_a);
	ClapTrap bot_c("Dean");
	bot_c.takeDamage(23);
	bot_c = bot_a;

	bot_a.attack("Penny");
	bot_c.takeDamage(23);
	bot_a.beRepaired(23);
	return (0);
}