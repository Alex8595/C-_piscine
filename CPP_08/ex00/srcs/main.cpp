/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:57:22 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/18 19:57:23 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::cout << std::endl << std::endl << std::endl << "_________ Easyfind on list failure __________" << std::endl << std::endl;

	std::list<int>		list1;
	
	list1.push_back(1);
	list1.push_back(2);
	list1.push_back(3);
	
	try
	{
		std::list<int>::const_iterator it_l1 = easyfind(list1, 42);
		std::cout << *it_l1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	



	std::cout << std::endl << std::endl << std::endl << "_________ Easyfind on list success __________" << std::endl << std::endl;

	std::list<int>		list2;
	
	list2.push_back(1);
	list2.push_back(2);
	list2.push_back(42);

	try
	{
		std::list<int>::const_iterator it_l2 = easyfind(list2, 42);
		std::cout << *it_l2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}




	std::cout << std::endl << std::endl << std::endl << "________ Easyfind on Vector failure _________" << std::endl << std::endl;

	std::vector<int>		v1(4, 10);
	
	try
	{
		std::vector<int>::iterator it_v1 = easyfind(v1, 84);
		std::cout << *it_v1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}




	std::cout << std::endl << std::endl << std::endl << "________ Easyfind on Vector success _________" << std::endl << std::endl;

	std::vector<int>		v2(4, 84);
	
	try
	{
		std::vector<int>::iterator it_v2 = easyfind(v2, 84);
		std::cout << *it_v2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}






/*
	____________ Video Example ____________

	//
	//	List introduction 
	//

	std::list<int>						list1;

	list1.push_back(1);
	list1.push_back(2);
	list1.push_back(3);

	std::list<int>::const_iterator		it;
	std::list<int>::const_iterator		ite = list1.end();

	for (it = list1.begin(); it != ite; ++it)
	{
		std::cout << *it << std::endl;
	}
	
	//
	//	Map introduction 
	//


	std::map<std::string, int>		map1;

	map1["Maria"] = 889;
	map1["Carlo"] = -50000;

	std::map<std::string, int>::iterator		iter = map1.begin();
	std::map<std::string, int>::iterator		itere = map1.end();

	for (; iter != itere; ++iter)
	{
		std::cout << iter->first << "  _  " <<  iter->second << std::endl;
	}

	//
	//	Vector introduction 
	//

	std::vector<int>		v1;
	std::vector<int>		v2(4, 10);

	std::vector<int>::iterator		viter = v2.begin();
	std::vector<int>::iterator		vitere = v2.end();

	for (; viter != vitere; ++viter)
	{
		std::cout << *viter << "  _  " << std::endl;
	}

	return (0);

*/