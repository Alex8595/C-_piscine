/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:32:21 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/31 18:42:01 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IMATERIASOURCE__
# define __IMATERIASOURCE__
# include <iostream>
# include "AMateria.hpp"

class IMateriaSource
{
	protected:
		int		test;

	public:
		virtual ~IMateriaSource() {		}
		virtual void learnMateria(AMateria *mat) = 0;
		virtual AMateria* createMateria(std::string const &type) = 0;
};

#endif
