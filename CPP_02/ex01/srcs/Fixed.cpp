/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:53:35 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/01 14:53:36 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractionl_bits = 8;

/*
**		Conversions
*/

float	Fixed::toFloat( void ) const
{
	float res;

	res = (float )this->fixed_point / (1 << 8);
	return (res);
}

int Fixed::toInt( void ) const
{
	int		res;
	
	res = this->fixed_point >> fractionl_bits;
	return (res);
}




/*
**		Get & Set
*/

int		Fixed::getRawBits( void ) const
{
	return (this->fixed_point);
}

void	Fixed::setRawBits( int const raw )
{
	this->fixed_point = raw;
}




/*
**		Op
*/

void Fixed::operator= ( const Fixed &f1 )
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_point = f1.getRawBits(); 
}

std::ostream	&operator<<(std::ostream &stream, const Fixed &fix_num)
{
    stream << fix_num.toFloat();
	return (stream);
}




/*
**		Con & Des	_	_	Diff Variables
*/

Fixed::Fixed( const int n )
{
	std::cout << "Int constructor called" << std::endl;

	this->fixed_point = n << this->fractionl_bits;
}

Fixed::Fixed( const float fl_nu )
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = roundf((1 << this->fractionl_bits) * fl_nu);
}




/*
**		Con & Des	_	_	Normals
*/

Fixed::Fixed( const Fixed &f1 )
{
	std::cout << "Copy constructor called" << std::endl;
	Fixed::operator= (f1);
}

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}
