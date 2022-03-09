/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:09:56 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/01 19:10:41 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__
# include "AMateria.hpp"

class	Character : public ICharacter
{
	private:
		AMateria						*inv_materias[4];
		std::string						name;
		int								idx_filled;

	public:
		virtual void 					equip(AMateria* m);
		virtual void					unequip(int idx);
		virtual void					use(int idx, ICharacter& target);

		virtual std::string const		&getName() const;
		
		void							operator=(const Character &ref);

		Character(const Character &ref);
		Character(const std::string &ref);
		Character();
		~Character();
};

#endif
