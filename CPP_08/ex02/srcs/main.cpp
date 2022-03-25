/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:47:14 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/22 19:47:16 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	std::cout << mstack.size() << std::endl << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}




	std::cout << std::endl << std::endl << std::endl << "_________ Original Stack  Copy test __________" << std::endl << std::endl;
	
	std::stack<int> s(mstack);
	while (!(s.empty()))
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}




	std::cout << std::endl << std::endl << std::endl << "_________ Original Stack Operator = _________" << std::endl << std::endl;
	
	std::stack<int> sb;

	sb = mstack;
	while (!(sb.empty()))
	{
		std::cout << sb.top() << std::endl;
		sb.pop();
	}











	std::cout << std::endl << std::endl << std::endl << "_________   Copy test __________" << std::endl << std::endl;
	
	MutantStack<int> mcons(mstack);

	while (!(mcons.empty()))
	{
		std::cout << mcons.top() << std::endl;
		mcons.pop();
	}




	std::cout << std::endl << std::endl << std::endl << "_________  Operator = _________" << std::endl << std::endl;
	
	MutantStack<int> mcopy;

	mcopy = mstack;
	while (!(mcopy.empty()))
	{
		std::cout << mcopy.top() << std::endl;
		mcopy.pop();
	}

	return 0;
}
