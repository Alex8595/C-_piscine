/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:03:24 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/23 15:03:25 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

void				RobotomyRequestForm::execute(Bureaucrat const &executor) const
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
			std::cout << " ....DRRR rrrr rRRRRRRr ...." << std::endl;
			std::cout << " ....Ghrt Ghrt gsssssss ...." << std::endl;
			std::cout << " ....DRRR rrrr rRRRRRRr ...." << std::endl;
			std::cout << " ....      POP          ...." << std::endl;


			srand((unsigned int)time(NULL));
			int v1 = rand() % 10 + 1;
			if (v1 % 2 == 0)
				std::cout << "The robotomy Worked, have you heard about the iBody Shop?" << std::endl;
			else
				std::cout << "The robotomy failed, how about a drink for your last few minutes alive?" << std::endl;

		}
	}
	catch(const std::exception& exception)
	{

	}
}

/*
**		Operators
*/

void				RobotomyRequestForm::operator=(RobotomyRequestForm &ref)
{
	if (ref.getIsSigned())
	{
		Bureaucrat tmp("tmp", 1);
		this->beSigned(tmp);
	}	
}

/*
**      Con & Des
*/

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &ref) : Form(ref.getName(), 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm() : Form("target", 72, 45)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}