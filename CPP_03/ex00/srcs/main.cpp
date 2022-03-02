/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:55:44 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/02 17:55:45 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << std::endl << "_________ Constructors ________" << std::endl;

	ClapTrap bot_a("Jenner");
	ClapTrap bot_c("Dean");




	std::cout << std::endl << "_________ Copy Con ____________" << std::endl;
	ClapTrap bot_b(bot_c);
	bot_b.attack("Enemy 1");




	std::cout << std::endl << "_________ Ass Op ______________" << std::endl;
	bot_c = bot_a;
	bot_c.attack("Enemy 1");




	std::cout << std::endl << "_________ Attack ______________" << std::endl;
	bot_b.attack("Penny");
	


	std::cout << std::endl << "_________ Take Damage _________" << std::endl;
	bot_b.takeDamage(23);
	


	std::cout << std::endl << "_________ Be Repaired _________" << std::endl;
	bot_b.takeDamage(9);
	bot_b.beRepaired(20);
	


	std::cout << std::endl << "_________ Destructors _________" << std::endl;
	return (0);
}
