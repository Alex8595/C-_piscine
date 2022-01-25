/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:01:22 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/25 16:50:16 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__
#include <iostream>

class AMateria
{
	protected:
		std::string				type;

	public:
		AMateria(std::string const &type);
		AMateria();
		~AMateria();
//		[...]

		std::string 			const &getType() const; //Returns the materia type
		virtual AMateria*		clone() const = 0;
		virtual void			use(ICharacter& target);
};

#endif
