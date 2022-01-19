#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		std::string					getType() const;
		void						makeSound() const;
		void						operator = (const WrongAnimal &ref);

		WrongAnimal(const WrongAnimal &ref);
		WrongAnimal();
		virtual ~WrongAnimal();
};

#endif
