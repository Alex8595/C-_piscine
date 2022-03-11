/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:49:27 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 17:29:46 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << std::endl << "___ Exceptions: too high and too low ___" << std::endl << std::endl;

	Bureaucrat	Bu_1("Sara", 0);
	Bureaucrat	Bu_2("Jeff", 151);




	std::cout << std::endl << "_________ Correct range grade __________" << std::endl << std::endl;

	Bureaucrat	Bu_3("Jean", 1);
	Bureaucrat	Bu_4("Sall", 150);

	std::cout << Bu_3.getName() << "'s grade from:              " << Bu_3.getGrade() << std::endl;
	std::cout << Bu_4.getName() << "'s grade from:              " << Bu_4.getGrade() << std::endl;




	std::cout << std::endl << "__________ Too high increment __________" << std::endl << std::endl;

	Bu_3.incrementGrade();




	std::cout << std::endl << "__________ Too low decrement ___________" << std::endl << std::endl;

	Bu_4.decrementGrade();




	std::cout << Bu_3.getName() << "'s grade from constructor:	" << Bu_3.getGrade() << std::endl;
	std::cout << Bu_4.getName() << "'s grade from constructor:	" << Bu_4.getGrade() << std::endl;




	std::cout << std::endl << "________ Correct in & decrement ________" << std::endl << std::endl;

	Bu_3.decrementGrade();
	Bu_4.incrementGrade();


	std::cout << Bu_3.getName() << "'s grade from constructor:	" << Bu_3.getGrade() << std::endl;
	std::cout << Bu_4.getName() << "'s grade from constructor:	" << Bu_4.getGrade() << std::endl;





	std::cout << std::endl << "_____________ Operator << ______________" << std::endl << std::endl;

	std::cout << Bu_3 << std::endl;
	std::cout << Bu_4 << std::endl;





	return (0);
}
