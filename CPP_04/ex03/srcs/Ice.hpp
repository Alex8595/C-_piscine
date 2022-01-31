/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:40:48 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/31 18:57:34 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
# define __ICE_HPP__
# include "AMateria.hpp"
# include "Character.hpp"

class	Ice : public AMateria
{
	public:
	//	virtual AMateria*				clone() const = 0;
	//	virtual void					use(ICharacter& target);

		Ice(std::string const &type);
		Ice();
		~Ice();
};

#endif
