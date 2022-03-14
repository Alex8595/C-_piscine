/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:57:16 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/04 19:57:17 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
**		Member Functions
*/

void	ft_free(Form **forms, int g_i)
{
	for (int i = 0; i < 3; i++)
	{
		if (i != g_i)
			delete forms[i];
	}
}

Form	*Intern::makeForm(std::string form_name, std::string form_target)
{
	std::string		f_names[3] = { "shrubbery creation" , "robotomy request" , "presidential pardon"};
	Form			*forms[3] = { new ShrubberyCreationForm(form_target), new RobotomyRequestForm(form_target), new PresidentialPardonForm(form_target)};

	for (int i = 0; i < 3; ++i)
	{
		if (f_names[i] == form_name)
		{
			std::cout << "Intern creates " << form_name << " form." << std::endl;
			ft_free(forms, i);
			return (forms[i]);
		}
	}
	ft_free(forms, 5);
	std::cout << "Error: there is no form with that name." << std::endl;
	return (NULL);
}




/*
**		Op
*/

void				Intern::operator=(const Intern &ref)
{
	if (&ref == &ref)
		;
}




/*
**		Con & Des
*/

Intern::Intern(const Intern &ref)
{
	if (&ref == &ref)
		;
}

Intern::Intern( void )
{

}

Intern::~Intern()
{

}
