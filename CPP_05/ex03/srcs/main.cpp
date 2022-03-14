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

#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/*
void	ft_leaks()
{
	system("leaks Intern");
	atexit(ft_leaks);
}
*/

int main(void)
{

	Intern		in;
	Bureaucrat	Samantha("Samantha", 1);

	Form		*a;
	Form		*b;
	Form		*c;
	Form		*d;
	
	a = in.makeForm("shrubbery creation", "Office_building");
	b = in.makeForm("robotomy request", "Elon");
	c = in.makeForm("presidential pardon", "Sam");
	d = in.makeForm("nothing", "Office_building");




	std::cout << std::endl << std::endl << std::endl << "_________ Execute Action ShrubberyCreationForm __________" << std::endl << std::endl;
	Samantha.signForm(*a);
	(*a).execute(Samantha);




	std::cout << std::endl << std::endl << std::endl << "_________ Execute Action RobotomyRequestForm  __________" << std::endl << std::endl;

	Samantha.signForm(*b);
	(*b).execute(Samantha);




	std::cout << std::endl << std::endl << std::endl << "_________ Execute Action PresidentialRequestForm  __________" << std::endl << std::endl;

	Samantha.signForm(*c);
	(*c).execute(Samantha);




	delete a;
	delete b;
	delete c;

	return (0);
}
