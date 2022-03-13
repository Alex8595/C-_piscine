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

int		exception(char *str)
{
	if ((strncmp(str, "-inff", 5) == 0 && str[5] == '\0') || (strncmp(str, "-inf", 4) == 0 && str[4] == '\0'))
	{
		std::cout << "char: "	<< "impossible"			<< std::endl;
		std::cout << "int: "	<< "impossible"			<< std::endl;
		std::cout << "float: "	<< "-inff"				<< std::endl;
		std::cout << "double: "	<< "-inf"				<< std::endl;
		return (1);
	}
 	else if ((strncmp(str, "+inff", 5) == 0 && str[5] == '\0') || (strncmp(str, "+inf", 4) == 0 && str[4] == '\0'))
	{
		std::cout << "char: "	<< "impossible"			<< std::endl;
		std::cout << "int: "	<< "impossible"			<< std::endl;
		std::cout << "float: "	<< "+inff"				<< std::endl;
		std::cout << "double: "	<< "+inf"				<< std::endl;
		return (1);
	}
	else if ((strncmp(str, "nanf", 4) == 0 && str[4] == '\0') || (strncmp(str, "nan", 3) == 0&& str[3] == '\0'))
	{
		std::cout << "char: "	<< "impossible"			<< std::endl;
		std::cout << "int: "	<< "impossible"			<< std::endl;
		std::cout << "float: "	<< "nanf"				<< std::endl;
		std::cout << "double: "	<< "nan"				<< std::endl;
		return (1);
	}
	return (0);
}

int	ft_int_e(char *str)
{
	long long int a;

	a = atoll(str);
	if (!(a > 2147483647 || a < -2147483648))
		return (0);
	std::cout << "char: "	<< "impossible"			<< std::endl;
	std::cout << "int: "	<< "impossible"			<< std::endl;
	std::cout << "float: "	<< "impossible"			<< std::endl;
	std::cout << "double: "	<< "impossible"			<< std::endl;
	return (1);
}

/*
**
*/

char	display_char(int i, char c)
{

	if (i >= 32 && i <= 126)
		std::cout << "'" << c << "'";
	else
		std::cout << "Non displayable";
	return (' ');
}

char	display_int(char *str, int i)
{
	long long int a;

	a = atoll(str);
	if (!(a > 2147483647 || a < -2147483648))
		std::cout << i;
	else
		std::cout << "impossible";
	return (' ');
}

char	display_float(float f)
{
	if (f == static_cast<int>(f))
		std::cout << f << ".0f";
	else
		std::cout << f << "f";
	return (' ');
}

char	display_double(double d)
{
	if (d == static_cast<int>(d))
		std::cout << d << ".0";
	else
		std::cout << d;
	return (' ');
}

/*
**		To All types
*/


void	ft_char(char *str)
{
//	std::cout << "___________ char __________" << std::endl;

	char	c;
	int		i;
	float	f;
	double	d;

	c = str[0];

	i = static_cast<int>(c);
	f = static_cast<float>(c);
	d = static_cast<double>(c);
	
	std::cout << "char: "	<< display_char(i, c)	<< std::endl;
	std::cout << "int: "	<< i					<< std::endl;
	std::cout << "float: "	<< f << "f" 			<< std::endl;
	std::cout << "double: "	<< d					<< std::endl;
}

int	ft_int(char *str)
{
//	std::cout << "___________ int ___________" << std::endl;

	char	c;
	int		i;
	float	f;
	double	d;

	if (ft_int_e(str))
		return (1);

	i = atoi(str);

	c = static_cast<char>(i);
	f = static_cast<float>(i);
	d = static_cast<double>(i);

	std::cout << "char: "	<< display_char(i, c)		<< std::endl;
	std::cout << "int: "	<< i						<< std::endl;
	std::cout << "float: "	<< f << ".0f" 				<< std::endl;
	std::cout << "double: "	<< d << ".0"				<< std::endl;
	return (0);
}

void	ft_float(char *str)
{
//	std::cout << "__________ float __________" << std::endl;

	char	c;
	int		i;
	float	f;
	double	d;

	f = atof(str);

	c = static_cast<char>(f);
	i = static_cast<int>(f);
	d = static_cast<double>(f);

	std::cout << "char: "	<< display_char(i, c)		<< std::endl;
	std::cout << "int: "	<< display_int(str, i)		<< std::endl;
	std::cout << "float: "	<< display_float(f)			<< std::endl;
	std::cout << "double: "	<< display_double(f)		<< std::endl;
}


void	ft_double(char *str)
{
//	std::cout << "__________ double __________" << std::endl;

	char	c;
	int		i;
	float	f;
	double	d;

	d = atof(str);

	c = static_cast<char>(d);
	i = static_cast<int>(d);
	f = static_cast<float>(d);

	std::cout << "char: "	<< display_char(i, c)		<< std::endl;
	std::cout << "int: "	<< display_int(str, i)		<< std::endl;
	std::cout << "float: "	<< display_float(f)			<< std::endl;
	std::cout << "double: "	<< display_double(f)		<< std::endl;
}




/*
**		Actual type
*/

int		is_double(char *str)
{
	int		i;

	i = 0;
	if ((str[0] == '-' || str[0] == '+') && str[1])
		i++;	
	while (str[i] != '\0')
	{
		if (!isdigit(str[i]) && str[i + 1] != '\0' && str[i] != '.')
			return (0);
		i++;
	}
	if (str[i - 1] != 'f')
	{
		ft_double(str);
		return (1);
	}
	return (0);
}

int		is_float(char *str)
{
	int		i;

	i = 0;
	if ((str[0] == '-' || str[0] == '+') && str[1])
		i++;
	while (str[i] != '\0')
	{
		if (!isdigit(str[i]) && str[i + 1] != '\0' && str[i] != '.')
			return (0);
		i++;
	}
	if (str[i - 1] == 'f')
	{
		ft_float(str);
		return (1);
	}
	return (0);
}

int		is_int(char *str)
{
	int i;
	
	i = 0;
	if ((str[0] == '-' || str[0] == '+') && str[1])
		i++;
	while (str[i] != '\0' && isdigit(str[i]))
		i++;
	if (str[i] == '\0')
	{
		ft_int(str);
		return (1);
	}
	return (0);
}

int		is_char(char *str)
{
	if ((str[0] != '\0' && str[1] == '\0'))
	{
		ft_char(str);
		return (1);
	}
	return (0);
}




/*
**		Main
*/

int main(int argc, char **argv)
{
	if (argc != 2)
		return (ft_error(0));
	if (exception(argv[1]))
		return (0);
	if (is_int(argv[1]))
		return (0);
	if (is_char(argv[1]))
		return (0);
	if (is_double(argv[1]))
		return (0);
	if (is_float(argv[1]))
		return (0);
	std::cout << "Humm... Can't convert that: try a char, int, float or double! :)" << std::endl;
	return (1);
}
