/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:09:25 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 15:09:26 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
# define __HUMANB_HPP__
# include "Weapon.hpp"

class	HumanB
{
	private:
		std::string		_name;
		Weapon			*_weapon;
		
	public:
		void			attack( void );
		void			setName( std::string c_name );
		std::string		getName( void );
		void			setWeapon( Weapon &c_weapon );


		HumanB( std::string c_name );
		~HumanB( void );
};

#endif
