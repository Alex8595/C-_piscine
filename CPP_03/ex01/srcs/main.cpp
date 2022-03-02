/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:38:10 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/02 18:38:11 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << std::endl << "_________ Constructors _________" << std::endl;

	ScavTrap	Serena("Serena");
	ScavTrap	Marina;

	Marina = Serena;

	std::cout << std::endl << "_________ Diff Attack __________" << std::endl;
	
	Serena.attack("Ganon");
	


	std::cout << std::endl << "_________ Same TakeD __________" << std::endl;
	
	Serena.takeDamage(3);



	std::cout << std::endl << "_________ Same Repair __________" << std::endl;

	Serena.beRepaired(13);
	


	std::cout << std::endl << "_________ Ass Op Test __________" << std::endl;

	Marina.attack("Pointy Rock");



	std::cout << std::endl << "_________ New Function _________" << std::endl;

	Serena.guardGate();



	std::cout << std::endl << "_________ Destructors _________" << std::endl;
	return (0);
}
