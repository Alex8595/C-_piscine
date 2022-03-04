/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:57:20 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/04 19:57:21 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class Intern
{   
	private:

	public:
		Form		*makeForm(std::string form_name , std::string form_target);

		Intern( void );
		~Intern();
};
