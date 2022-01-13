#include <iostream>
#include "Fixed.hpp"
#include <cmath>

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

float	Fixed::toFloat( void ) const
{
	float	all;

	all = (float)this->fixed_point;



	std::cout << all << std::endl;
	return(all);
}

int Fixed::toInt( void ) const
{
	int res = this->fixed_point;
	for (int i = 1; i < 8; ++i)
		res = res & ~(1 << (i - 1));
	res = res >> this->fractionl_bits;
	for (int i = 9; i <= 16; ++i)
		res = res & ~(1 << (i - 1));
	return (res);
}

/*  ------------  */
/*	Constructors  */
/*  ------------  */



//	Equal Constructor
void Fixed::operator= ( const Fixed &f1 )
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_point = f1.getRawBits(); 
}

//	Int Constructor
Fixed::Fixed( const int n )
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = n << this->fractionl_bits;
}

//	Float Constructor
Fixed::Fixed( const float fl_nu )
{
	//quiero convertir in float en un fixed point
	std::cout << "Float constructor called" << std::endl;

	this->fixed_point = roundf((1 << this->fractionl_bits) * fl_nu);
	
	std::cout <<  "Fixed point:    " << this->fixed_point << std::endl;
}

//	Copy Constructor
Fixed::Fixed( const Fixed &f1 )
{
	std::cout << "Copy constructor called" << std::endl;
	Fixed::operator= (f1);
	this->fixed_point = f1.fixed_point;
}

//	Default constructor
Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

//	Default Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}

/*
		int					this->fixed_point;
		static const int	this->fractionl_bits;

	res = 42;
//	This transform this to while number part
	res = res << 8;


//	This add the decimal to the numeric
	res += 42;


//	This gives you the decimal part
	for (int i = 9; i <= 16; ++i)
		res = res & ~(1 << (i - 1));


//	This pushes bits up 8 bits
	res = res << 8;

//	This pushes bits down 8 bits
	res = res >> 8;

	std::cout << res << std::endl;
*/