/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:53:38 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/01 14:53:39 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					fixed_point;
		static const int	fractionl_bits;

	public:
		void	operator= ( const Fixed &f1 );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;
		
		Fixed();
		Fixed( const Fixed &f1 );
		Fixed( const int n );
		Fixed( const float fl_nu );

		~Fixed();
};	

std::ostream	&operator<<(std::ostream &stream, Fixed const &fix_num);

#endif
