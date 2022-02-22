/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:03:36 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 15:03:37 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
# define __HUMANA_HPP__
# include "Weapon.hpp"

class	HumanA
{
	private:
		std::string		_name;
		Weapon			&_weapon;
		
	public:
		void			attack( void );

		void			setName( std::string c_name );
		std::string		getName( void );

		HumanA( std::string c_name, Weapon &c_weapon );
		~HumanA( void );
};

#endif
