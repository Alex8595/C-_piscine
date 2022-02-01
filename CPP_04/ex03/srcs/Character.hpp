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
# include "ICharacter.hpp"

class	Character : public ICharacter
{
	private:
		int								n_filled;
		std::string						name;
		AMateria						*inv_materias[4];

	public:
		virtual std::string const		&getName() const;
		virtual void 					equip(AMateria* m);
		virtual void					unequip(int idx);
		virtual void					use(int idx, ICharacter& target);
		
	//	void 	operator=(const Character &ref);
	//	Character(const Character &ref);
		Character();
		~Character();
};

#endif
