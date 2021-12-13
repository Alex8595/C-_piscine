/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:49:46 by ahernand          #+#    #+#             */
/*   Updated: 2021/11/30 14:49:48 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <iostream>

int			main (int argc, char **argv)
{
	int		i;
	int		j;
//	char	aux;

	i = 1;
	j = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			while (argv[i][j])
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					std::cout << (char)(argv[i][j] - 32);
				else
					std::cout << argv[i][j];
				j++;
			}
			j = 0;
			i++;
		}
		std::cout << std::endl;
	}
	return(0);
}
