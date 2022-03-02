/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:00:25 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/02 19:00:26 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		void            attack(std::string const &target);
		void			guardGate();
		void        	operator = ( const ScavTrap &o_class );

		ScavTrap( const ScavTrap &ref_to_copy );
		ScavTrap(std::string name);
		ScavTrap();
		~ScavTrap();
};

#endif
