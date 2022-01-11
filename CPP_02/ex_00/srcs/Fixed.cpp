#include <iostream>
#include "Fixed.hpp"

const int	Fixed::fractionl_bits = 8;

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}

void	Fixed::setRawBits( int const raw )
{
	this->fixed_point = raw;
}

void Fixed::operator= ( const Fixed &f1 )
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_point = f1.getRawBits(); 
}

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed( const int i )
{
	std::cout << "integer constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed( const Fixed &f1 )
{
	std::cout << "Copy constructor called" << std::endl;
	Fixed::operator= (f1);
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}