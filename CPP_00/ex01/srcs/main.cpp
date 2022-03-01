/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:32:50 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 13:33:00 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/*
**		Add, search
**		_ _ _ _ _ _ 
*/

void clear_in()
{
	std::cin.clear();
	std::cin.ignore(10000, '\n');
}

int			ft_add(PhoneBook *pb)
{
	std::string		str;

	pb->setCurrent(pb->getCurrent() + 1);
	if (pb->getTotal() < 8)
		pb->setTotal(pb->getTotal() + 1);

	if (pb->getCurrent() == 8)
		pb->setCurrent(0);


	std::cout << "Please input the first name" << std::endl;
	std::cin >> str;
	pb->ppl[pb->getCurrent()].setFirstName(str);
	str.clear();
	clear_in();

	std::cout << "Please input the last name" << std::endl;
	std::cin >> str;
	pb->ppl[pb->getCurrent()].setLastName(str);
	str.clear();
	clear_in();

	std::cout << "Please input the nickname" << std::endl;
	std::cin >> str;
	pb->ppl[pb->getCurrent()].setNickname(str);
	str.clear();
	clear_in();

	std::cout << "Please input the darkest secret" << std::endl;
	std::cin >> str;
	pb->ppl[pb->getCurrent()].setDarkestSecret(str);
	str.clear();
	clear_in();

	std::cout << "Please input the phone number" << std::endl;
	std::cin >> str;
	pb->ppl[pb->getCurrent()].setPhoneNumber(str);
	str.clear();
	clear_in();

	std::cout << "Everything is correct, thank you" << std::endl;
	std::cout << "Welcome to Phone Book!" << std::endl;
	std::cout << "ADD     SEARCH     EXIT" << std::endl;

	return (0);
}

int			ft_search(PhoneBook *pb)
{
	std::string		c;
	int				i;
	int				lock;
	std::string		aux;

	i = 0;
	lock = 0;
	std::cout << "  Index   | Fst name | Lst name | Nickname |" << std::endl;
	std::cout << "__________|__________|__________|__________|" << std::endl;
	while (i < pb->getTotal())
	{
		std::cout << "    " << i + 1 << "     |";

		if (pb->ppl[i].getFirstName().length() >= 10)
			std::cout << pb->ppl[i].getFirstName().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << pb->ppl[i].getFirstName() << "|";


		if (pb->ppl[i].getLastName().length() >= 10)
			std::cout << pb->ppl[i].getLastName().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << pb->ppl[i].getLastName() << "|";	


		if (pb->ppl[i].getNickname().length() >= 10)
			std::cout << pb->ppl[i].getNickname().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << pb->ppl[i].getNickname() << "|";
		std::cout << std::endl;
		i++;

	}
	std::cout << "__________|__________|__________|__________|" << std::endl;
	while (!lock)
	{
		std::cout << "Which contact would you like to see? 0 to exit" << std::endl;
		std::cin >> c;
		clear_in();
		if (c[0] != '0' && c[0] != '1' && c[0] != '2' && c[0] != '3'&& c[0] != '4'&& c[0] != '5' && c[0] != '6' && c[0] != '7' && c[0] != '8')
		{
			std::cout << "Wrong input, use 0 to 8!" << std::endl;
		}
		else
		{
			i = c[0] - '0';
			if (i <= pb->getTotal() && i > 0)
			{
				std::cout << std::setw(20) << std::left << "First name: "		<< pb->ppl[i - 1].getFirstName()		<< std::endl;
				std::cout << std::setw(20) << std::left << "Last name: "		<< pb->ppl[i - 1].getLastName()			<< std::endl;
				std::cout << std::setw(20) << std::left << "Nickname: "			<< pb->ppl[i - 1].getNickname()			<< std::endl;
				std::cout << std::setw(20) << std::left << "Phone number: "		<< pb->ppl[i - 1].getPhoneNumber()		<< std::endl;
				std::cout << std::setw(20) << std::left << "Darkest secret: "	<< pb->ppl[i - 1].getDarkestSecret()	<< std::endl;
			}
			else if (i  == 0)
			{
				std::cout << "Welcome to Phone Book !" << std::endl;
				lock = 1;
			}
			else
				std::cout << "This number doesn't exist" << std::endl;
		}
	}
	return (0);
}


/*
**		Utils
**		_ _ _ _ _ _ 
*/

int			ft_error(std::string str)
{
	if ((str == "ADD")		||
		(str == "SEARCH")	||
		(str == "EXIT")		)
		return (1);
	else
	{
		std::cout << "Wrong commands. Usage:" << std::endl;
		std::cout << "ADD     SEARCH     EXIT" << std::endl;
		return (-1);
	}
}

/*
**	Main
*/

int		main (int argc, char **argv)
{
	std::string		buff;
	PhoneBook		pb;

	if (argc != 1 && argv[0])
	{
		std::cout << "Too many arguments" << std::endl;
		return (-1);
	}
	std::cout << "Welcome to Phone Book !" << std::endl;
	std::cout << "ADD     SEARCH     EXIT" << std::endl;
	std::cin >> buff;
	clear_in();
	while (ft_error(buff) && !(buff == "EXIT"))
	{
		if (buff == "ADD")
			ft_add(&pb);
		if (buff == "SEARCH")
			ft_search(&pb);
		std::cin >> buff;
		clear_in();
	}
	return(0);
}
