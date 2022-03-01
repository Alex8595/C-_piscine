/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:38:52 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 13:38:54 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int main()
{
	Zombie	Doh("Doh");
	
	Doh.announce();
	
	Zombie *Alish = newZombie("Alish");


	randomChump("Casio");
	std::cout << std::endl;

	delete Alish;
	std::cout << std::endl;

	return (0);
}
