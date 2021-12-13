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

#include "phone_book.hpp"

int		main (int argc, char **argv)
{
	std::string		buff;
	phone_book		pb;

	if (argc != 1 && argv[0])
	{
		std::cout << "Too many arguments" << std::endl;
		return (-1);
	}
	std::cout << "Welcome to Phone Book!" << std::endl;
	std::cin >> buff;
	while (ft_error(buff) && !abs_memcmp(buff, "EXIT"))
	{
		if (abs_memcmp(buff, "ADD"))
			ft_add(&pb);
		if (abs_memcmp(buff, "SEARCH"))
			ft_search(&pb);
		std::cin >> buff;
	}
	return(0);
}

/*
**		Add, search
**		_ _ _ _ _ _ 
*/


int			ft_add(phone_book *pb)
{
	std::string		str;

	pb->current++;
	if (pb->total < 8)
		pb->total++;

	if (pb->current == 8)
		pb->current = 0;
	std::cout << "Please input the first name" << std::endl;
	std::cin >> pb->ppl[pb->current].first_name;

	std::cout << "Please input the last name" << std::endl;
	std::cin >> pb->ppl[pb->current].last_name;

	std::cout << "Please input the nickname" << std::endl;
	std::cin >> pb->ppl[pb->current].nickname;

	std::cout << "Please input the darkest secret" << std::endl;
	std::cin >> pb->ppl[pb->current].darkest_secret;

	std::cout << "Please input the phone number" << std::endl;
	std::cin >> pb->ppl[pb->current].phone_number;

	std::cout << "Everything is correct, thank you" << std::endl;
	return (0);
}

int			ft_search(phone_book *pb)
{
	int		i;

	i = 0;
	std::cout << "  Index   | Fst name | Lst name | Nickname |" << std::endl;
	std::cout << "__________|__________|__________|__________|" << std::endl;
	while (i < pb->total && i <= 9)
	{
		std::cout << "    " << i + 1 << "     |";

		if (pb->ppl[i].first_name.length() >= 10)
			std::cout << pb->ppl[i].first_name.substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << pb->ppl[i].first_name << "|";	
		if (pb->ppl[i].last_name.length() >= 10)
			std::cout << pb->ppl[i].last_name.substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << pb->ppl[i].last_name << "|";	
		if (pb->ppl[i].nickname.length() >= 10)
			std::cout << pb->ppl[i].nickname.substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << pb->ppl[i].nickname << "|";	
		std::cout << std::endl;
		i++;

	}
	std::cout << "__________|__________|__________|__________|" << std::endl;
	std::cout << "Which contact would you like to see?" << std::endl;
	std::cin >> i;
	if (i - 1 <= pb->current && i > 0)
	{
		std::cout << std::setw(20) << std::left << "First name: "		<< pb->ppl[i - 1].first_name		<< std::endl; 
		std::cout << std::setw(20) << std::left << "Last name: "		<< pb->ppl[i - 1].last_name			<< std::endl; 
		std::cout << std::setw(20) << std::left << "Nickname: "			<< pb->ppl[i - 1].nickname			<< std::endl; 
		std::cout << std::setw(20) << std::left << "Phone number: "		<< pb->ppl[i - 1].phone_number		<< std::endl; 
		std::cout << std::setw(20) << std::left << "Darkest secret: "	<< pb->ppl[i - 1].darkest_secret	<< std::endl; 
	}
	else
		std::cout << "This number doesn't exist" << std::endl;

	return (0);
}


/*
**		Utils
**		_ _ _ _ _ _ 
*/

int			abs_memcmp(std::string arr1, std::string arr2)
{
	int		i;

	i = 0;
	while (arr1[i] != '\0' && arr2[i] != '\0' && arr1[i] == arr2[i] && i < 10)
		i++;
	if (arr1[i] == '\0' && arr2[i] == '\0')
		return (1);
	return (0);
}

int			ft_error(std::string str)
{

	if (abs_memcmp(str, "ADD")		|| 
		abs_memcmp(str, "SEARCH")	||
		abs_memcmp(str, "EXIT")		)
		return (1);
	else
	{
		std::cout << "Wrong commands. Usage:" << std::endl;
		std::cout << "ADD\t SEARCH \t EXIT" << std::endl;
		return (-1);
	}
}