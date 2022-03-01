/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:00:28 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/23 16:00:28 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

void		PresidentialPardonForm::execute(Bureaucrat const &executor) const
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
			std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
		}
	}
	catch(const std::exception& exception)
	{

	}
}

/*
**		Operators
*/

void				PresidentialPardonForm::operator=(PresidentialPardonForm &ref)
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

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &ref) : Form(ref.getName(), 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm() : Form("target", 25, 5)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}