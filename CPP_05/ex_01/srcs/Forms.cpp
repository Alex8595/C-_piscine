/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Forms.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:52:32 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/16 17:52:32 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Forms.hpp"
#include "Bureaucrat.hpp"

void					Forms::beSigned(Bureaucrat &ref)
{
	try
	{
		if (ref.getGrade() <= getGradeReqSign())
			is_signed = true;
		else
			throw (Forms::GradeTooLowException());
	}
	catch (std::exception &exception)
	{
	}
}

/*
**		G & S
*/

std::string				Forms::getName()
{
	return (name);
}

int						Forms::getGradeReqSign()
{
	return (grade_req_sign);
}

int						Forms::getGradeReqExec()
{
	return (grade_req_exec);
}

bool					Forms::getIsSigned()
{
	return (is_signed);	
}

/*
**		For Construct in bounds
*/

int						ft_inbound(int g_grade)
{
	try
	{
		if (g_grade > 150)
		{
			throw (Forms::GradeTooLowException());
		}
		else if (g_grade < 1)
		{
			throw (Forms::GradeTooHighException());
		}
		else
		{
			return(g_grade);
		}
	}
	catch (std::exception &exception)
	{

	}
	return (42);
}

Forms::GradeTooHighException::GradeTooHighException()
{
	std::cout << "Grade Too High!" << std::endl;					
}

Forms::GradeTooLowException::GradeTooLowException()
{
	std::cout << "Grade Too Low!" << std::endl;					
}

/*
**		Operators
*/

std::ostream			&operator<<(std::ostream &stream, Forms &ref)
{
    stream << ref.getName() << ", Grade Requiered to sign it is " << ref.getGradeReqSign() << ", to execute it is " << ref.getGradeReqExec();
	if (ref.getIsSigned() == true)
		stream << ", and currently it's signed.";
	else
		stream << ", and currently it's not signed.";
	return (stream);
}

void					Forms::operator=(Forms &ref)
{
	this->is_signed = ref.is_signed;
}

/*
**		C & D
*/

Forms::Forms(std::string g_name, int gr_sign, int gr_exec) : 
	name(g_name), grade_req_sign(ft_inbound(gr_sign)), grade_req_exec(ft_inbound(gr_exec))
{
    is_signed = false;
}

Forms::Forms() : name("Default"), grade_req_sign(42), grade_req_exec(21)
{
	is_signed = false;
}

Forms::Forms(const Forms &ref) :
	name(ref.name), grade_req_sign(ref.grade_req_sign), grade_req_exec(ref.grade_req_exec), is_signed(ref.is_signed)
{

}

Forms::~Forms()
{

}
