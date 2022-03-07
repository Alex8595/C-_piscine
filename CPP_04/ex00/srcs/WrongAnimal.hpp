/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:40:28 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/07 16:40:28 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		std::string					getType() const;
		void						makeSound() const;
		void						operator = (const WrongAnimal &ref);

		WrongAnimal(const WrongAnimal &ref);
		WrongAnimal();
		virtual ~WrongAnimal();
};

#endif
