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

int		ft_inbound(int g_grade)
{
	try
	{
		if (g_grade > 150)
		{
			throw (Forms::GradeTooLowException::GradeTooLowException());
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
	return (0);
}

/*
**		For Construct in bounds
*/

Forms::GradeTooHighException::GradeTooHighException()
{
	std::cout << "Grade Too High!" << std::endl;					
}

Forms::GradeTooLowException::GradeTooLowException()
{
	std::cout << "Grade Too Low!" << std::endl;					
}

/*
**		C & D
*/

Forms::Forms(std::string g_name, int gr_sign, int gr_exec) :
						name(g_name), grade_req_sign(ft_inbound(gr_sign)), grade_req_exec(ft_inbound(gr_exec))
{
    is_signed = false;
}
