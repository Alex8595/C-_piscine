/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:14:58 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/18 16:51:55 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap Mao("Muchen");

	std::cout << std::endl;

	Mao.whoAmI();
	Mao.seeStats();

	Mao.attack("Evil Frog");

	std::cout << std::endl;
	return (0);
}
