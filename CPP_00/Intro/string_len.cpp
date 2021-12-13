# include <unistd.h>
# include <iostream>
# include <iomanip>

int main()
{
	std::string buff;

	buff = "haha";
	
	std::cout << std::right << std::setw(8) << buff;	
	std::cout << "|" << std::endl;
	return(0);
}

