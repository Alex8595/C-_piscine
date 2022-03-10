/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:03:27 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/23 15:03:28 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ROBOTOMYREQUESTFORM_HPP_
# define _ROBOTOMYREQUESTFORM_HPP_
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		void				execute(Bureaucrat const &executor) const;

		void				operator=(RobotomyRequestForm &ref);
		RobotomyRequestForm(RobotomyRequestForm &ref);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm();
		~RobotomyRequestForm();
};

#endif