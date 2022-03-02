/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:37:02 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/13 17:37:06 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__
# include <iostream>

class ClapTrap
{
	private:
		std::string		name;
		int				hitPoints;
		int				energyPoints;
		int				attackDamage;
		
	public:
		void			attack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		void 			operator=( const ClapTrap &o_class );		

		ClapTrap( const std::string par_name );
		ClapTrap( const ClapTrap &ref_to_copy );
		ClapTrap();
		~ClapTrap();

};
#endif
