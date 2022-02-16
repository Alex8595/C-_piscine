/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:49:27 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/02 14:49:28 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
	//			Exceptions, too high and too low
	Bureaucrat	Bu_1("Sara", 0);
	Bureaucrat	Bu_2("Jeff", 151);

	//			Correct range grade
	Bureaucrat	Bu_3("Jean", 1);
	Bureaucrat	Bu_4("Sall",150);

	std::cout << Bu_3.getName() << "'s grade from:              " << Bu_3.getGrade() << std::endl;
	std::cout << Bu_4.getName() << "'s grade from:              " << Bu_4.getGrade() << std::endl;
	std::cout << std::endl;

	//			too high increment
	Bu_3.incrementGrade();

	//			too low decrement
	Bu_4.decrementGrade();

	std::cout << Bu_3.getName() << "'s grade from constructor:	" << Bu_3.getGrade() << std::endl;
	std::cout << Bu_4.getName() << "'s grade from constructor:	" << Bu_4.getGrade() << std::endl;
	std::cout << std::endl;


	//			Correct decrement
	Bu_3.decrementGrade();

	//			Correct increment
	Bu_4.incrementGrade();


	std::cout << Bu_3.getName() << "'s grade from constructor:	" << Bu_3.getGrade() << std::endl;
	std::cout << Bu_4.getName() << "'s grade from constructor:	" << Bu_4.getGrade() << std::endl;
	std::cout << std::endl;

	return (0);
}
