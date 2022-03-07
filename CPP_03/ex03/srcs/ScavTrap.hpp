/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:18:06 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/18 14:18:08 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		int				energyPoints;

	public:
		void            attack(std::string const &target);
		void			guardGate();
		void        	operator=( const ScavTrap &o_class );

		ScavTrap( const ScavTrap &ref_to_copy );
		ScavTrap(std::string name);
		ScavTrap();
		virtual ~ScavTrap();
};

#endif
