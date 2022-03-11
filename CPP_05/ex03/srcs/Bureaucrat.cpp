/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:52:33 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/02 14:52:34 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
**		G & S
*/

std::string				Bureaucrat::getName() const
{
	return (name);
}

int						Bureaucrat::getGrade() const
{
	return (grade);
}




/*
**		Execute
**		ex_02 NEW function
*/

void					Bureaucrat::executeForm(const Form &ref)
{
	if (grade <= ref.getGradeReqExec())
	{
		std::cout << "Buraucrat " << getName() << ", executes form " << ref.getName() << "." << std::endl;
	}
	else
		std::cout << "Buraucrat " << getName() << ", cannot execute " << ref.getName() << " form because Bureaucrat grade is too low." << std::endl;

}




/*
**		Sign
**		ex_01 NEW function
*/

void					Bureaucrat::signForm(Form &ref)
{
	if (grade <= ref.getGradeReqSign())
	{
		ref.beSigned(*this);
		std::cout << "Buraucrat " << getName() << ", signs form " << ref.getName() << "." << std::endl;
	}
	else
		std::cout << "Buraucrat " << getName() << ", cannot sign " << ref.getName() << " form because Bureaucrat grade is too low." << std::endl;
}

/*
**		Increment & Decrement
*/

void					Bureaucrat::incrementGrade()
{
	try
	{
		if (grade - 1 < 1)
			throw (Bureaucrat::GradeTooHighException());
		else
			grade--;
	}
	catch (std::exception &exception)
	{
	}
}

void					Bureaucrat::decrementGrade()
{
	try
	{
		if (grade + 1 > 150)
			throw (Bureaucrat::GradeTooHighException());
		else
			grade++;
	}
	catch (std::exception &exception)
	{
	}
}




/*
**		For Construct in bounds
*/

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	std::cout << "Grade Too High!" << std::endl;					
};

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	std::cout << "Grade Too Low!" << std::endl;					
};




/*
**		Op
*/

void					Bureaucrat::operator=(Bureaucrat &ref)
{
	this->grade = ref.getGrade();
}

std::ostream			&operator<<(std::ostream &stream, Bureaucrat &ref)
{
    stream << ref.getName() << ", bureaucrat grade " << ref.getGrade() << ".";
	return(stream);
}




/*
**		C & D
*/

Bureaucrat::Bureaucrat(void) : name("Default")
{
	grade = 42;
}

Bureaucrat::Bureaucrat(Bureaucrat &ref) : name("Default")
{
	this->grade = ref.getGrade();
}

Bureaucrat::Bureaucrat(int grade_given) : name("Default")
{
	try
	{
		if (grade_given > 150)
			throw (Bureaucrat::GradeTooLowException());
		else if (grade_given < 1)
		{
			throw (Bureaucrat::GradeTooHighException());
		}
		else
		{
			grade = grade_given;
		}
	}
	catch (std::exception &exception)
	{
	}
}

Bureaucrat::Bureaucrat(std::string name_given, int grade_given) : name(name_given)
{
	try
	{
		if (grade_given > 150)
			throw (Bureaucrat::GradeTooLowException());
		else if (grade_given < 1)
		{
			throw (Bureaucrat::GradeTooHighException());
		}
		else
		{
			grade = grade_given;
		}
	}
	catch (std::exception &exception)
	{
	}
}

Bureaucrat::~Bureaucrat()
{
	
}