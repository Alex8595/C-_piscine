/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:46:32 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/01 13:46:33 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__
# include <iostream>

class Fixed
{
	private:
		int					fixed_point;
		static const int	fractionl_bits;

	public:
		void	operator= ( const Fixed &f1 );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		Fixed();
		Fixed( const Fixed &f1 );
		~Fixed();
};	

#endif
