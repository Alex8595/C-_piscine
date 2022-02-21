
#include "PhoneBook.hpp"
#include "contact.hpp"

/*
**		Add, search
**		_ _ _ _ _ _ 
*/

int			ft_add(PhoneBook *pb)
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
	std::cout << "Welcome to Phone Book!" << std::endl;

	return (0);
}

int			ft_search(PhoneBook *pb)
{
	int			i;
	int			lock;
	std::string	aux;

	i = 0;
	lock = 0;
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
	while (!lock)
	{
		std::cout << "Which contact would you like to see? 0 to exit" << std::endl;
		std::cin >> i;
	//	if (!(i = stoi(aux)))
	//	if (!(atoi(aux.c_str())))
	//		std::cout << "This number doesn't exist" << std::endl;
		if (i - 1 <= pb->current && i > 0)
		{
			std::cout << std::setw(20) << std::left << "First name: "		<< pb->ppl[i - 1].first_name		<< std::endl;
			std::cout << std::setw(20) << std::left << "Last name: "		<< pb->ppl[i - 1].last_name			<< std::endl;
			std::cout << std::setw(20) << std::left << "Nickname: "			<< pb->ppl[i - 1].nickname			<< std::endl;
			std::cout << std::setw(20) << std::left << "Phone number: "		<< pb->ppl[i - 1].phone_number		<< std::endl;
			std::cout << std::setw(20) << std::left << "Darkest secret: "	<< pb->ppl[i - 1].darkest_secret	<< std::endl;
		}
		else if (i  == 0)
		{
			std::cout << "Welcome to Phone Book!" << std::endl;
			lock = 1;
		}
		else
			std::cout << "This number doesn't exist" << std::endl;
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
		std::cout << "ADD\t SEARCH \t EXIT" << std::endl;
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
	std::cout << "Welcome to Phone Book!" << std::endl;
	//std::cin >> buff;
	std::getline(std::cin, buff);
	while (ft_error(buff) && !(buff == "EXIT"))
	{
		if (buff == "ADD")
			ft_add(&pb);
		if (buff == "SEARCH")
			ft_search(&pb);
		std::cin >> buff;
	}
	return(0);
}