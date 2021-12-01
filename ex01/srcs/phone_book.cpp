/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:48:33 by ahernand          #+#    #+#             */
/*   Updated: 2021/11/30 14:51:52 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <iostream>

int			abs_memcmp(char *arr1, char *arr2);
int			ft_errors(char *str);

int			main (int argc, char **argv)
{
	char	buff[512];

	if (argc != 1)
	{
		std::cout << "Too many arguments" << std::endl;
		return (-1);
	}
	std::cin >> buff;
	if (ft_errors(buff) <= 0)
		return (1);
	std::cout << buff << std::endl;
	return(0);
}

/*
**		Utils
**		_ _ _ _ _ _ 
*/

int			abs_memcmp(char *arr1, char *arr2)
{
	int		i;

	i = 0;
	while (arr1[i] != '\0' && arr2[i] != '\0' && arr1[i] == arr2[i])
		i++;
	if (arr1[i] == '\0' && arr2[i] == '\0')
		return (1);
	return (0);
}

int			ft_errors(char *str)
{

	if (abs_memcmp(str, (char *)"ADD")		|| 
		abs_memcmp(str, (char *)"SEARCH")	||
		abs_memcmp(str, (char *)"EXIT")		)
		return (1);
	else
	{
		std::cout << "Wrong commands. Usage:" << std::endl;
		std::cout << "ADD\t SEARCH \t EXIT" << std::endl;
		return (-1);
	}
}