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
# include <iostream>

class	Bureaucrat
{
	protected:
		std::string		name;	
		int						grade;	//1 to 150 (ranking like)

	public:
		std::string				getName();
		int						getGrade();
		void					incrementGrade();
		void					decrementGrade();

		void					operator=(Bureaucrat &ref);
		//std::ostream			&operator<<(std::ostream &stream);
	    friend std::ostream		&operator<<(std::ostream& os, const Bureaucrat& ref);


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
#endif