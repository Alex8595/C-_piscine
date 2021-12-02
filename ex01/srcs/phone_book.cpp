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

int			main (int argc, char **argv)
{
	std::string		buff;
	phone_book		pb;

	if (argc != 1)
	{
		std::cout << "Too many arguments" << std::endl;
		return (-1);
	}
	std::cin >> buff;
	while (ft_error(buff) && !abs_memcmp(buff, "EXIT"))
	{
		if (abs_memcmp(buff, (char *)"ADD"))
			ft_add(buff, &pb);
		if (abs_memcmp(buff, (char *)"SEARCH"))
			ft_search(buff);

		std::cout << "__" << std::endl;

		std::cout << pb.ppl[0].first_name << std::endl;

		std::cout << "__" << std::endl;


		std::cin >> buff;
	}
	return(0);
}

/*
**		Add, search
**		_ _ _ _ _ _ 
*/


int			ft_add(std::string buf, phone_book *pb)
{
	std::string		str;
	std::cout << "Please input the first name" << std::endl;
	std::cin >> pb->ppl[0].first_name;

	//	std::cout << pb->ppl[0].first_name << std::endl;

	/*
	std::cout << "Please input the last name" << std::endl;
	std::cin >> pb->ppl[pb->current].last_name;
	std::cout << "Please input the nickname" << std::endl;
	std::cin >> pb->ppl[pb->current].nickname;
	std::cout << "Please input the darkest secret" << std::endl;
	std::cin >> pb->ppl[pb->current].darkest_secret;
	std::cout << "Please input the phone number" << std::endl;
	std::cin >> pb->ppl[pb->current].phone_number;
	pb->current++;
	*/
	return (0);
}

int			ft_search(std::string str)
{
	std::cout << "search" << std::endl;

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