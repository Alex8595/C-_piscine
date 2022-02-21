#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# include <iostream>
# include <iomanip>
# include "contact.hpp"

class	PhoneBook
{
	public:
		contact		ppl[8];
		int			current;
		int			total;
	
		PhoneBook();
};

#endif