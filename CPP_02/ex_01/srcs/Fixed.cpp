#include <iostream>
#include "Fixed.hpp"

const int	Fixed::fb = 8;

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->num);
}

void	Fixed::setRawBits( int const raw )
{
	this->num = raw;
}

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->num = 0;
}

Fixed::Fixed( const Fixed &f1 )
{
	std::cout << "Copy constructor called" << std::endl;
	Fixed::operator= (f1);
	this->num = f1.num;
}

/*	New constructors	*/

Fixed::Fixed( const int n )
{
	std::cout << "Int constructor called" << std::endl;
	std::cout << n << 100000000 << std::endl;
}


void Fixed::operator= ( const Fixed &f1 )
{
	std::cout << "Assignation operator called" << std::endl;
	this->num = f1.getRawBits(); 
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}