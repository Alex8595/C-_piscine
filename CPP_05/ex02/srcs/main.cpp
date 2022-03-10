/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:38:02 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 18:38:03 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat              Alok("Alok", 147);
	Bureaucrat              Samantha("Samantha", 1);

	ShrubberyCreationForm   Home("Home");
	RobotomyRequestForm		Homeless_205("HL");
	PresidentialPardonForm	Hawking("Hawkings");
	



	std::cout << std::endl << std::endl << std::endl << "_________ Failure of sign bc low lvl __________" << std::endl << std::endl;

	Home.beSigned(Alok);
	Alok.signForm(Home);



	std::cout << std::endl << std::endl << std::endl << "_________ Failure of exec bc low lvl __________" << std::endl << std::endl;

	Alok.executeForm(Home);
	Home.execute(Alok);




	std::cout << std::endl << std::endl << std::endl << "________ Failure of execute not signed ________" << std::endl << std::endl;

	Home.execute(Samantha);
	Samantha.executeForm(Home);
	std::cout << Home << std::endl;




	std::cout << std::endl << std::endl << std::endl << "_________ Execute Action ShrubberyCreationForm __________" << std::endl << std::endl;

	Home.beSigned(Samantha);
	Home.execute(Samantha);

	std::cout << Home << std::endl;




	std::cout << std::endl << std::endl << std::endl << "_________ Execute Action RobotomyRequestForm  __________" << std::endl << std::endl;


	Homeless_205.beSigned(Samantha);

	Samantha.executeForm(Homeless_205);
	//Homeless_205.execute(Samantha);

	std::cout << Homeless_205 << std::endl;




	std::cout << std::endl << std::endl << std::endl << "_________ Execute Action RobotomyRequestForm  __________" << std::endl << std::endl;


	Hawking.beSigned(Samantha);

	Samantha.executeForm(Hawking);
	//Hawking.execute(Samantha);

	std::cout << Hawking << std::endl;

	return (0);
}
