/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:45:22 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/19 13:45:24 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP_
# define __FORM_HPP_
# include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string		name;
		bool					is_signed;
		const int				grade_req_sign;
		const int				grade_req_exec;

	public:

	
		void					beSigned(Bureaucrat &ref);


		std::string				getName() const;
		bool					getIsSigned() const;
		int						getGradeReqSign() const;
		int						getGradeReqExec() const;

		void					operator=(Form &ref);

		Form(const Form &ref);
		Form(std::string g_name, int gr_sign, int gr_exec);
		Form();
		~Form();

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

std::ostream &operator<<(std::ostream &stream, Form &ref);

#endif
