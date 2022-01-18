/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:15:16 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/17 17:08:12 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	private:
		
	public:
		virtual std::string			getType() const;
		virtual void		 		makeSound() const;
		void						operator=(const Cat &ref);

		Cat(const Cat &ref);
		Cat();
		~Cat();
};

#endif
