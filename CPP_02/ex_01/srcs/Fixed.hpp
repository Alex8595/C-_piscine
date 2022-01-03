#ifndef __FIXED_HPP__
# define __FIXED_HPP__

class Fixed
{
	private:
		int					num;
		static const int	fb;

	public:
		void	operator= ( const Fixed &f1 );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		Fixed();
		Fixed( const Fixed &f1 );
		~Fixed();
};	

#endif