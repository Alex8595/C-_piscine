/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:36:12 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/21 15:54:26 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__
#include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		std::string					getType() const;
		virtual void				makeSound() const;
		virtual std::string			getIdea(int num);
		virtual void				setIdea(std::string idea, int num);
		virtual void				operator = (Animal &ref);

		Animal(const Animal &ref);
		Animal();
		virtual ~Animal();
};

#endif
