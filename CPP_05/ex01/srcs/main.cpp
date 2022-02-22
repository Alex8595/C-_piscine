/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:29:56 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 17:29:57 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	Form		f1("Main Road", 50, 31);
	Form		f2("Monument", 10, 20);

	Bureaucrat	b1("Samantha", 1);
	Bureaucrat	b2("Paola", 99);

	//				Operator <<
	std::cout << "_ Operator <<" << std::endl;

	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	std::cout << std::endl;

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << std::endl;


	//				be signed funtion Failure
	std::cout << "_ be signed funtion Failure" << std::endl;

	f1.beSigned(b2);
	std::cout << f1 << std::endl; 


	//				be signed funtion Success
	std::cout << "_ be signed funtion Success" << std::endl;

	f1.beSigned(b1);
	std::cout << f1 << std::endl; 
	std::cout << std::endl;


    //				signForm function Failure
	std::cout << "_ SignForm function Failure" << std::endl;

	b2.signForm(f2);
	std::cout << f2 << std::endl; 
	std::cout << std::endl;


	//			   SignForm function Success
	std::cout << "_SignForm function Success" << std::endl;

	b1.signForm(f2);
	std::cout << f2 << std::endl; 
	std::cout << std::endl;

    return (0);
}
