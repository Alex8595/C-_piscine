/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:32:54 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/19 14:51:07 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__
# include "iostream"

class Brain
{
	public:
		std::string				ideas[100];
		void    				ft_init_ideas();
		void 					operator=(const Brain *ref);

		Brain(const Brain &ref);
		Brain();
		~Brain();
};

#endif
