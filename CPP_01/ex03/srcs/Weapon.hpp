/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:55:44 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 14:55:46 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__
# include <iostream>

class Weapon
{
	private:
		std::string				_type;

	public:
		void					setType( std::string str );
		const std::string		&getType( void );

		Weapon( void );
		Weapon( std::string c_str );
		~Weapon( void );
};

#endif
