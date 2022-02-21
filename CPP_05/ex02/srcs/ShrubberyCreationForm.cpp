/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:01:07 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/19 14:01:08 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

/*
**      C & S
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{

}

void		ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (executor.getGrade() < 0)
			throw (Bureaucrat::GradeTooLowException());
	}
	catch(const std::exception& exception)
	{

	}
		
	std::ofstream outfile ("test.txt");

	outfile << "my text here!" << std::endl;

	outfile.close();
}