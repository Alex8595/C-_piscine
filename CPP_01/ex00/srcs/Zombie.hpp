/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:56:25 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 13:56:26 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// ************************************************************************** //
//                               Zombie  Class                                //
// ************************************************************************** //

class Zombie
{
	private:
		std::string		_name;

	public:
		void			announce( void );
		void			set_name( std::string name );
		std::string		get_name( void );

		
		Zombie( std::string str );
		Zombie( void );
		~Zombie( void );
};
