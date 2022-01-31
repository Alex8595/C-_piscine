/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:01:22 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/31 18:57:43 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__
//# include "ICharacter.hpp"
# include <iostream>

class AMateria
{
	protected:
		std::string				type;

	public:
//		virtual AMateria*		clone() const = 0;
//		virtual void			use(ICharacter& target);
		std::string				const &getType() const;

		void	operator=(const AMateria &ref);
		AMateria(const AMateria &ref);
		AMateria(std::string const &type);
		AMateria();
		~AMateria();
};

#endif
