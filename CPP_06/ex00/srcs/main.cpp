/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:06:12 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/11 15:06:13 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
**		Aux Functions
*/

int		ft_error(int code)
{
	if (code == 0)
		std::cout << "Incorrect number of arguments, expected 1" << std::endl;
	return (1);
}

char	display_char(int i, char c)
{

	if (i >= 32 && i <= 126)
		std::cout << c;
	else
		std::cout << "Non displayable";
	return (' ');
}




/*
**		To All types
*/


void	ft_char(char *str)
{
	std::cout << "___________ char __________" << std::endl;

	char	c;
	int		i;
	float	f;
	double	d;

	c = static_cast<char>(str[0]);

	i = static_cast<int>(c);
	f = static_cast<float>(c);
	d = static_cast<double>(c);
	
	std::cout << "char: "	<< display_char(i, c)	<< std::endl;
	std::cout << "int: "	<< i					<< std::endl;
	std::cout << "float: "	<< f << "f" 			<< std::endl;
	std::cout << "double: "	<< d					<< std::endl;
}

void	ft_int(char *str)
{
	std::cout << "___________ int ___________" << std::endl;

	char	c;
	int		i;
	float	f;
	double	d;

	i = atoi(str);
	
	c = static_cast<char>(i);
	f = static_cast<float>(i);
	d = static_cast<double>(i);

	std::cout << "char: "	<< display_char(i, c)	<< std::endl;
	std::cout << "int: "	<< i					<< std::endl;
	std::cout << "float: "	<< f << "f" 			<< std::endl;
	std::cout << "double: "	<< d					<< std::endl;
}

void	ft_float(char *str)
{
	std::cout << "__________ float __________" << std::endl;

	char	c;
	int		i;
	float	f;
	double	d;

	f = atof(str);

	c = static_cast<char>(f);
	i = static_cast<int>(f);
	d = static_cast<double>(f);

	std::cout << "char: "	<< display_char(i, c)	<< std::endl;
	std::cout << "int: "	<< i					<< std::endl;
	std::cout << "float: "	<< f << "f" 			<< std::endl;
	std::cout << "double: "	<< d					<< std::endl;
}




/*
**		Actual type
*/

int		is_float(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!isdigit(str[i]) && str[i + 1] != '\0' && str[i] != '.')
			return (0);
		i++;
	}
	if (str[i - 1] == 'f')
		ft_float(str);
	return (0);
}

int		is_int(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0' && isdigit(str[i]))
		i++;
	if (str[i] == '\0')
		ft_int(str);
	return (0);
}

int		is_char(char *str)
{
	if ((str[0] != '\0' && str[1] == '\0'))
		ft_char(str);
	return (0);
}




/*
**		Main
*/

int main(int argc, char **argv)
{
	if (argc != 2)
		return (ft_error(0));
	if (is_float(argv[1]))
		return (0);
	else if (is_int(argv[1]))
		return (0);
	else if (is_char(argv[1]))
		return (0);
	return (1);
}
