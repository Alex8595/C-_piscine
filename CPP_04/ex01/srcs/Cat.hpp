/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:15:16 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/21 16:20:08 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain						*my_brain;

	public:
		virtual std::string			getIdea(int num);
		virtual void				setIdea(std::string idea, int num);
		
		virtual void		 		makeSound() const;

		void						operator=(Animal &ref);
		Cat(Cat &ref);
		Cat();
		~Cat();
};

#endif
