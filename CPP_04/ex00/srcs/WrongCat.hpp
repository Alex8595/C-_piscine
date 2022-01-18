#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		
	public:
		std::string			getType() const;
		void		 		makeSound() const;
		void				operator=(const WrongCat &ref);

		WrongCat(const WrongCat &ref);
		WrongCat();
		~WrongCat();
};

#endif
