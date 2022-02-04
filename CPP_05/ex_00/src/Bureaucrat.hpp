/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:52:39 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/02 14:52:40 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP_
# define __BUREAUCRAT_HPP_
# include <iostream>

class	Bureaucrat
{
	protected:
		const std::string		name;
		int						grade;

	public:
		Bureaucrat();
		~Bureaucrat();
};

#endif