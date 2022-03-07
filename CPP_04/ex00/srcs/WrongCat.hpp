/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:40:08 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/07 16:40:09 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		
	public:
		std::string			getType() const;
		void		 		makeSound() const;
		void				operator=(const WrongCat &ref);

		WrongCat(const WrongCat &ref);
		WrongCat();
		~WrongCat();
};

#endif
