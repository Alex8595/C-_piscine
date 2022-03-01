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

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat              Alok("Alok", 147);
	ShrubberyCreationForm   Utopia("Utopia");

	Bureaucrat              Samantha("Samantha", 1);
	ShrubberyCreationForm   Home("Home");

	RobotomyRequestForm		Homeless_205("HL");

	PresidentialPardonForm	Hawking("HL");
	
	//				Failure of sign
	std::cout << "_ Failure of sign" << std::endl;
	Utopia.beSigned(Alok);
	std::cout << std::endl;

	//				Failure of execute too low grade
	std::cout << "_ Failure of execute too low grade"<< std::endl;
	Alok.executeForm(Utopia);
	Utopia.execute(Alok);
	std::cout << std::endl;

	//				Failure of execute not signed
	std::cout << "_ Failure of execute not signed"<< std::endl;
	Utopia.execute(Samantha);
	std::cout << Utopia << std::endl;
	std::cout << std::endl;


	//              Execute Action ShrubberyCreationForm
	std::cout << "_ Execute Action ShrubberyCreationForm"<< std::endl;
	Home.beSigned(Samantha);
	Home.execute(Samantha);
	std::cout << Home << std::endl;
	std::cout << std::endl;



	//              Execute Action RobotomyRequestForm
	std::cout << "_ Execute Action RobotomyRequestForm"<< std::endl;
	Homeless_205.beSigned(Samantha);
	Samantha.executeForm(Homeless_205);
	Homeless_205.execute(Samantha);

	std::cout << Homeless_205 << std::endl;
	std::cout << std::endl;



	//              Execute Action PresidentialPardonForm
	std::cout << "_ Execute Action RobotomyRequestForm"<< std::endl;

	Hawking.beSigned(Samantha);
	Samantha.executeForm(Hawking);
	Hawking.execute(Samantha);

	std::cout << Hawking << std::endl;
	std::cout << std::endl;

	return (0);
}
