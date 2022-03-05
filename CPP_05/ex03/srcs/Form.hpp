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
		const int				grade_req_sign;
		const int				grade_req_exec;
		bool					is_signed;

	public:
		virtual void			execute(Bureaucrat const &executor) const = 0;


		void					beSigned(Bureaucrat &ref);

		std::string				getName() const;
		int						getGradeReqSign() const;
		int						getGradeReqExec() const;
		bool					getIsSigned() const;

		void					operator=(Form &ref);
		Form(std::string g_name, int gr_sign, int gr_exec);
		Form(const Form &ref);
		Form();
		virtual ~Form();

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

	class NotSignedException : public std::exception
	{
		public:
			NotSignedException();
	};

};

std::ostream &operator<<(std::ostream &stream, Form &ref);

#endif
