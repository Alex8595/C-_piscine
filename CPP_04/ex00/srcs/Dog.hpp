/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:12:41 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/17 17:08:15 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		virtual void				makeSound() const;
		void						operator=(const Dog &ref);

		Dog(const Dog &ref);
		Dog();
		~Dog();
};

#endif
