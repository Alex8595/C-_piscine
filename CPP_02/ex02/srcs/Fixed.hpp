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
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;
		
		void	operator= ( const Fixed &f1 );
		
		//>, <, >=, <=, == and !=.
		bool	operator> ( const Fixed &f1 ) const;
		bool	operator< ( const Fixed &f1 ) const;
		bool	operator>= ( const Fixed &f1 ) const;
		bool	operator<= ( const Fixed &f1 ) const;
		bool	operator== ( const Fixed &f1 ) const;
		bool	operator!= ( const Fixed &f1 ) const;

		//+, -, *, and /
		Fixed	operator+ ( const Fixed &f1 ) const;
		Fixed	operator- ( const Fixed &f1 ) const;
		Fixed	operator* ( const Fixed &f1 ) const;
		Fixed	operator/ ( const Fixed &f1 ) const;

		//++x, x++, --x and x--
		Fixed	&operator++();
		float	operator++(int);

		Fixed	&operator--();
		float	operator--(int);
		
		static const Fixed		&max(const Fixed &a, const Fixed &b);
		static  Fixed			&max(Fixed &a, Fixed &b);

		static  Fixed			&min(Fixed &a, Fixed &b);
		static const Fixed		&min(const Fixed &a, const Fixed &b);


		Fixed();
		Fixed( const Fixed &f1 );
		Fixed( const int n );
		Fixed( const float fl_nu );

		~Fixed();
};	

std::ostream	&operator<<(std::ostream &stream, const Fixed &fix_num);

#endif
