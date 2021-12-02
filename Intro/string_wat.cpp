# include <unistd.h>
# include <iostream>

int main()
{
	std::string		buff;


	std::cin >> buff;

	std::cout << buff[1] << std::endl;

	if (buff[1] == '\0')
		std::cout << "askign" << std::endl;

	return (0);
	
}