/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:01:11 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/19 14:01:11 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SHRUBBERYCREATIONFORM_HPP_
# define _SHRUBBERYCREATIONFORM_HPP_
# include <fstream>  
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		void		execute(Bureaucrat const &executor) const;

		void				operator=(ShrubberyCreationForm &ref);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &ref);
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
};

#endif