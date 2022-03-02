/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:46:43 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/13 18:17:11 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << std::endl << "_________ Constructors _________" << std::endl;
	FragTrap Sonia("Sonia");



	std::cout << std::endl << "_________ New Function _________" << std::endl;
	Sonia.highFivesGuys();



	std::cout << std::endl << "_________ Destructors __________" << std::endl;
	return (0);
}
