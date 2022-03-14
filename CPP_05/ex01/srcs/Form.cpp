/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:45:30 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/19 13:45:31 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void					Form::beSigned(Bureaucrat &ref)
{
	try
	{
		if (ref.getGrade() <= getGradeReqSign())
			is_signed = true;
		else
			throw (Form::GradeTooLowException());
	}
	catch (std::exception &exception)
	{
	}
}




/*
**		Exceptions
*/

Form::GradeTooHighException::GradeTooHighException()
{
	std::cout << "Grade Too High!" << std::endl;					
}

Form::GradeTooLowException::GradeTooLowException()
{
	std::cout << "Grade Too Low!" << std::endl;					
}




/*
**		G & S
*/

std::string				Form::getName() const
{
	return (name);
}

int						Form::getGradeReqSign() const
{
	return (grade_req_sign);
}

int						Form::getGradeReqExec() const
{
	return (grade_req_exec);
}

bool					Form::getIsSigned() const
{
	return (is_signed);	
}




/*
**		Operators
*/

std::ostream			&operator<<(std::ostream &stream, Form &ref)
{
    stream << ref.getName() << ", Grade Requiered to sign it is " << ref.getGradeReqSign() << ", to execute it is " << ref.getGradeReqExec();
	
	if (ref.getIsSigned() == true)
		stream << ", and currently it's signed.";
	else
		stream << ", and currently it's not signed.";

	return (stream);
}

void					Form::operator=(Form &ref)
{
	this->is_signed = ref.is_signed;
}




/*
**		For Construct in bounds
*/

int						ft_inbound(int g_grade)
{
	try
	{
		if (g_grade > 150)
			throw (Form::GradeTooLowException());
		else if (g_grade < 1)
			throw (Form::GradeTooHighException());
		else
			return (g_grade);
	}
	catch (std::exception &exception)
	{
	}
	return (42);
}




/*
**		C & D
*/

Form::Form(const Form &ref) :
	name(ref.getName()), is_signed(ref.getIsSigned()), grade_req_sign(ref.getGradeReqSign()), grade_req_exec(ref.getGradeReqExec())
{

}

Form::Form(std::string g_name, int gr_sign, int gr_exec) : 
	name(g_name), grade_req_sign(ft_inbound(gr_sign)), grade_req_exec(ft_inbound(gr_exec))
{
    is_signed = false;
}

Form::Form() : name("Default"), grade_req_sign(42), grade_req_exec(21)
{
	is_signed = false;
}

Form::~Form()
{

}
