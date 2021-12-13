# include <iostream>
# include <iomanip>

int main()
{
	std::string		string = "HI THIS IS BRAIN";
	std::string&	stringREF = string;
	std::string*	stringPTR = &string;


	std::cout << "String adress:    " << std::setw(25) << &string << std::endl;
	std::cout << "Reference adress: "  << std::setw(25) << &stringREF << std::endl;
	std::cout << "Pointer adress:   "  << std::setw(25) << stringPTR << std::endl;

	std::cout <<  std::endl;


	std::cout << "String by Reference:"  << std::setw(25) << stringREF << std::endl;
	std::cout << "String by adress:   "  << std::setw(25) << *stringPTR << std::endl;

}