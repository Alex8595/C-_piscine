/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Forms.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:52:36 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/16 17:52:37 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORMS_HPP_
# define __FORMS_HPP_
# include <iostream>

class Bureaucrat;

class Forms
{
	private:
		const std::string		name;
		const int				grade_req_sign;
		const int				grade_req_exec;
		bool					is_signed;

	public:
		void					beSigned(Bureaucrat &ref);

		std::string				getName();
		int						getGradeReqSign();
		int						getGradeReqExec();
		bool					getIsSigned();

		void					operator=(Forms &ref);
		Forms(std::string g_name, int gr_sign, int gr_exec);
		Forms(const Forms &ref);
		Forms();
		~Forms();

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

std::ostream &operator<<(std::ostream &stream, Forms &ref);

#endif
