/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:05:16 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/13 18:15:19 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__
# include "ClapTrap.hpp"

class	FragTrap  : public ClapTrap
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
