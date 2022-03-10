/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:00:31 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/23 16:00:31 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PRESIDENTIALPARDONFORM_HPP_
# define _PRESIDENTIALPARDONFORM_HPP_
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		void				execute(Bureaucrat const &executor) const;

		void				operator=(PresidentialPardonForm &ref);
		PresidentialPardonForm(PresidentialPardonForm &ref);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm();
		~PresidentialPardonForm();
};

#endif