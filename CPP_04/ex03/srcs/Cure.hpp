/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:27:39 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/08 15:27:41 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
# define __CURE_HPP__
# include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		virtual AMateria*				clone() const;

		void							operator=(const Cure &ref);
		Cure(const Cure &ref);
		Cure();
		~Cure();
};

#endif
