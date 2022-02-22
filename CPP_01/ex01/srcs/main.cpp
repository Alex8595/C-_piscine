/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:21:17 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 14:21:18 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* ZombieHorde( int N, std::string name );

int main()
{
	int		i;
	int		N;
	Zombie	*z_ptr;

	i = 0;
	N = 12;
	z_ptr = ZombieHorde(N, "Zombie");

	while (i < N)
	{
		z_ptr[i].announce();
		i++;
	}

	delete [] z_ptr;

	return(0);
}
