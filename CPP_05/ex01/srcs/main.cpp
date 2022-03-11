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

#include "Bureaucrat.hpp"

int main(void)
{
	Form		Road("Road", 50, 31);
	Form		Monument("Monument", 10, 20);

	Bureaucrat	Samantha("Samantha", 1);
	Bureaucrat	Paola("Paola", 51);




	std::cout << std::endl << std::endl << std::endl << "________________ Operator <<  _________________" << std::endl << std::endl;

	std::cout << Road << std::endl;
	std::cout << Monument << std::endl;

	std::cout << std::endl;

	std::cout << Paola << std::endl;
	std::cout << Samantha << std::endl;




	std::cout << std::endl << std::endl << std::endl << "_________ be_signed funtion Failure  __________" << std::endl << std::endl;

	Road.beSigned(Paola);
	std::cout << Road << std::endl; 




	std::cout << std::endl << std::endl << std::endl << "_________ be_signed funtion Success  __________" << std::endl << std::endl;

	Road.beSigned(Samantha);
	std::cout << Road << std::endl; 




	std::cout << std::endl << std::endl << std::endl << "_________ signForm  funtion Failure  __________" << std::endl << std::endl;

	Paola.signForm(Monument);
	std::cout << Monument << std::endl; 




	std::cout << std::endl << std::endl << std::endl << "_________ signForm  funtion Success  __________" << std::endl << std::endl;

	Samantha.signForm(Monument);
	std::cout << Monument << std::endl; 

    return (0);
}
