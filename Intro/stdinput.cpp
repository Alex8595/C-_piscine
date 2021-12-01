#include <stdio.h>
#include <iostream>

int	main()
{
	char	buff[512];

	std::cout << "Hello world !" << std::endl;
	
	std::cout << "input a word: ";

	std::cin >> buff;

	std::cout << "You entered: [" << buff << "]" << std::endl;

/*
	int i = 0;

	while (i < 20)
	{
		std::cout << buff[i];
		i++;
	}
	std::cout << std::endl;
*/
	return (0);
}