/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:36:20 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/02 18:36:20 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__
# include <iostream>

class ClapTrap
{
	protected:
		std::string		name;
		int				hitPoints;
		int				energyPoints;
		int				attackDamage;
		
	public:
		void			attack(std::string const &target);
		void			beRepaired(unsigned int amount);
		void			takeDamage(unsigned int amount);

		void 			operator = ( const ClapTrap &o_class );		

		ClapTrap();
		ClapTrap( const ClapTrap &ref_to_copy );
		ClapTrap( const std::string par_name );
		virtual ~ClapTrap();

};
#endif
