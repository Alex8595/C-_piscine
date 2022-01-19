#include "WrongCat.hpp"

std::string		WrongCat::getType() const
{
	return (this->type);
}

void			WrongCat::makeSound() const
{
	std::cout << "*Meow from WrongCat*" << std::endl;
}

void 			WrongCat::operator= (const WrongCat &ref)
{
	std::cout << "Wrong Cat Assignation operator Called" << std::endl;
	this->type = ref.type;
}

/*
**	C & D
*/

WrongCat::WrongCat(const WrongCat &ref)
{
	std::cout << "Wrong Cat Copy Constructor Called" << std::endl;
	this->type = ref.type;
}

WrongCat::WrongCat()
{
	std::cout << "Wrong Cat Constructor Called" << std::endl;
	this->type = "Wrong Cat";
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat Destruct Called" << std::endl;
}
