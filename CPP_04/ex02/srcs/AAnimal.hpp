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

#ifndef __AANIMAL_HPP__
# define __AANIMAL_HPP__
#include <iostream>

class  AAnimal
{
	protected:
		std::string type;

	public:
		virtual std::string			getType() const = 0;
		virtual void				makeSound() const = 0;
		virtual std::string			getIdea(int num) = 0;
		virtual void				setIdea(std::string idea, int num) = 0;
		virtual void				operator = (AAnimal &ref);

		AAnimal(const AAnimal &ref);
		AAnimal();
		virtual ~AAnimal();
};

#endif
