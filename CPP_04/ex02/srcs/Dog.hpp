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
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain						*my_brain;

	public:
		virtual std::string			getIdea(int num);
		virtual void				setIdea(std::string idea, int num);
		
		virtual std::string			getType() const;
		virtual void				makeSound() const;
		void						operator=(AAnimal &ref);

		Dog(Dog &ref);
		Dog();
		~Dog();
};

#endif
