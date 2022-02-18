#include <iostream>
#include "Forms.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	Forms		f1("Road 6", 50, 31);
	Forms		f2("Monument", 10, 20);

	Bureaucrat	b1("Samantha", 1);
	Bureaucrat	b2("Paola", 99);

	//			Operator <<
	std::cout << b1 << std::endl; 
	std::cout << f1 << std::endl; 
	std::cout << std::endl;


	//			be signed funtion Failure
	f1.beSigned(b2);
	std::cout << f1 << std::endl; 


	//			be signed funtion Success
	f1.beSigned(b1);
	std::cout << f1 << std::endl; 
	std::cout << std::endl;


    //          signForm function Failure
	std::cout << "_ SignForm function Failure" << std::endl;

	b2.signForm(f2);
	std::cout << f2 << std::endl; 
	std::cout << std::endl;


	//			signForm function Success
	std::cout << "_SignForm function Success" << std::endl;

	b1.signForm(f2);
	std::cout << f2 << std::endl; 
	std::cout << std::endl;

    return (0);
}