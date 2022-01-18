/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:05:16 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/18 16:54:52 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__
# include <iostream>
# include "ClapTrap.hpp"

class	FragTrap  : virtual public ClapTrap
{
	public:
		void		operator = ( const FragTrap &o_class );
		void		highFivesGuys(void);

		FragTrap( const FragTrap &ref_to_copy );
		FragTrap(std::string name);
		FragTrap();
		~FragTrap();
};

#endif
