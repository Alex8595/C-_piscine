#ifndef __FIXED_HPP__
# define __FIXED_HPP__

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

#endif