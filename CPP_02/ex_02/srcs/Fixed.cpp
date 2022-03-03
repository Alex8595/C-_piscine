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
#include <iostream>

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

std::ostream	&operator<<(std::ostream &stream, Fixed const &fix_num)
{
    stream << fix_num.toFloat();
	return (stream);
}




//>, <, >=, <=, == and !=.

bool	Fixed::operator> ( const Fixed &f1 ) const
{
	if (this->getRawBits() > f1.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator< ( const Fixed &f1 ) const
{
	if (this->getRawBits() < f1.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator>= ( const Fixed &f1 ) const
{
	if (this->getRawBits() >= f1.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator<= ( const Fixed &f1 ) const
{
	if (this->getRawBits() <= f1.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator== ( const Fixed &f1 ) const
{
	if (this->getRawBits() == f1.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator!= ( const Fixed &f1 ) const
{
	if (this->getRawBits() != f1.getRawBits())
		return (1);
	return (0);
}




//+, -, *, and /

Fixed	Fixed::operator+ ( const Fixed &f1 ) const
{
	Fixed res;

	res = toFloat() + f1.toFloat();
	return (res);
}

Fixed	Fixed::operator- ( const Fixed &f1 ) const
{
	Fixed res;

	res = toFloat() - f1.toFloat();
	return (res);
}

Fixed	Fixed::operator* ( const Fixed &f1 ) const
{
	Fixed res;

	res = toFloat() * f1.toFloat();
	return (res);
}

Fixed	Fixed::operator/ ( const Fixed &f1 ) const
{
	Fixed res;
	res = 0;
	if (f1.getRawBits() != 0)
		res = toFloat() / f1.toFloat();
	return (res);
}

//++x, x++, --x and x--


Fixed	&Fixed::operator++()
{
	this->fixed_point++;
	return (*this);
}

float	Fixed::operator++(int)
{
	float res;

	res = toFloat();
	this->fixed_point++;
	return (res);
}


Fixed	&Fixed::operator--()
{
	this->fixed_point--;
	return (*this);
}

float	Fixed::operator--(int)
{
	float res;

	res = toFloat();
	this->fixed_point--;
	return (res);
}




//Max _ Min

const Fixed		&max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	else
		return (a);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	else
		return (a);
}




//Max _ Min


Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
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
