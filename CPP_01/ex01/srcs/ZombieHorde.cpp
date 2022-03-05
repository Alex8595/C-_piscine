/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:25:23 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 14:25:24 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* ZombieHorde( int N, std::string name )
{
	Zombie	*horde;
	int		i;

	i = 0;
	horde = new Zombie[N]; 
	while (i < N)
	{
		horde[i].set_name(name + " " + std::to_string(i + 1));
		i++;
	}
	return (horde);
}
