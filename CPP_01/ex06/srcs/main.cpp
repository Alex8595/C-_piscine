#include "Karen.hpp"
#include <iostream>


int main(int argc, char **argv)
{
	Karen	k1;

	if (argc != 2)
	{
		std::cout << "Input 1 state of Karen" << std::endl;
		return (1);
	}
	k1.complain(argv[1]);
	return (0);
}