/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:01:22 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/01 19:17:33 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string				type;

	public:
		AMateria(std::string const &type);
		AMateria(const AMateria &ref);
		AMateria();
		virtual ~AMateria();
		void operator=(const AMateria &ref);

		std::string				const &getType() const;

		virtual AMateria*		clone() const = 0;
		virtual void			use(ICharacter& target);
};

#endif
