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
**		Execute
*/

void		ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try
	{
		//	Sam = 100			grade = 101
		if (executor.getGrade() > this->getGradeReqExec())
			throw (Bureaucrat::GradeTooLowException());
		if (this->getIsSigned() == false)
			throw (Form::NotSignedException());
		else
		{
			std::ofstream outfile(this->getName() + "_shrubbery");

			outfile << "      |" << std::endl;
			outfile << "    \\|/|/" << std::endl;
			outfile << "  \\|\\|//|/" << std::endl;
			outfile << "   \\|\\|/|/" << std::endl;
			outfile << "    \\|//" << std::endl;
			outfile << "     \\|/" << std::endl;
			outfile << "     \\|/" << std::endl;
			outfile << "      |" << std::endl;
			outfile << "_\\|/__|_\\|/____\\|/_" << std::endl;
			outfile.close();
		}
	}
	catch (const std::exception& exception)
	{
	}
}




/*
**		Operators
*/

void				ShrubberyCreationForm::operator=(ShrubberyCreationForm &ref)
{
	if (ref.getIsSigned())
	{
		Bureaucrat tmp("tmp", 1);
		this->beSigned(tmp);
	}	
}




/*
**      C & D
*/

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &ref) : Form(ref.getName(), 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("target", 145, 137)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}