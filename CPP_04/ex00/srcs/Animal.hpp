/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:36:12 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/17 17:08:18 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__
# include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		std::string					getType() const;
		virtual void				makeSound() const;
		void						operator=(const Animal &ref);

		Animal(const Animal &ref);
		Animal();
		virtual ~Animal();
};

#endif
