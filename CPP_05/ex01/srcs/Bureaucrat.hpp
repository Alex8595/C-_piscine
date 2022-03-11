/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:52:39 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/02 14:52:40 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP_
# define __BUREAUCRAT_HPP_
# include "Form.hpp"

class	Bureaucrat
{
	private:
		const std::string		name;	
		int						grade;	//1 to 150 (ranking like)

	public:
		void					signForm(Form &ref);


		std::string				getName() const;
		int						getGrade() const;
		void					incrementGrade();
		void					decrementGrade();

		void					operator=(Bureaucrat &ref);

		Bureaucrat();
		Bureaucrat(int grade_given);
		Bureaucrat(Bureaucrat &ref);
		Bureaucrat(std::string name_given, int grade_given);
		~Bureaucrat();


		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException();
		};
};

std::ostream &operator<<(std::ostream &stream, Bureaucrat &object);

#endif