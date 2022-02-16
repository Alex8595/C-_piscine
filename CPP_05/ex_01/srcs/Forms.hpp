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

#include <iostream>

class Forms
{
	private:
		const std::string		name;
		const int				grade_req_sign;
		const int				grade_req_exec;
		bool					is_signed;

	public:
		Forms(std::string g_name, int gr_sign, int gr_exec);
		~Forms();

	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException()
			{
				std::cout << "Grade Too High!" << std::endl;					
			};
	};

	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException()
			{
				std::cout << "Grade Too Low!" << std::endl;					
			};
	};		
};