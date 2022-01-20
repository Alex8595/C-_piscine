/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:15:16 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/20 16:01:05 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain						*my_brain;
		
	public:
		virtual std::string			getIdea(int num);
		virtual void				setIdea(std::string idea, int num);
		virtual std::string			getType() const;
		virtual void		 		makeSound() const;
		virtual void				operator=(const Cat &ref);

		Cat(const Cat &ref);
		Cat();
		~Cat();
};

#endif
