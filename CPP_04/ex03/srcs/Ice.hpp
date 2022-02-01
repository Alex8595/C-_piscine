/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:40:48 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/01 19:11:17 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
# define __ICE_HPP__
# include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
		virtual AMateria*				clone() const;

		Ice(std::string const &type);
		Ice();
		~Ice();
};

#endif
