/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 13:55:56 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/18 16:54:50 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		std::string		name;

		void			whoAmI();
		void			seeStats();
		std::string		getDiamondClapName();

		void			operator=( DiamondTrap &o_class );

		DiamondTrap( DiamondTrap &ref_to_copy );
		DiamondTrap(std::string name_par);
		DiamondTrap(void);
		~DiamondTrap();
};
#endif
