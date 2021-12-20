#include "replace.hpp"


int		replace(std::string infile, std::string s1, std::string s2)
{
	std::ifstream	if_stream;
	std::ofstream	of_stream;
	
	std::string		content;
	int				position;

	if (s1.empty() || s2.empty())
	{
		return(ft_error(1));
	}
	if_stream.open(infile);
	if (if_stream.fail())
	{
		return(ft_error(2));
	}
	of_stream.open(infile + ".replace");
	if (of_stream.fail())
	{
		return(ft_error(3));
	}
	while (getline(if_stream, content))
	{
		position = content.find(s1);
		if (position >= 0)
		{
			content.erase(position, s1.length());
			content.insert(position, s2);
		}
		of_stream << content << std::endl;
	}
	if_stream.close();
	of_stream.close();

	return (0);
}
 
int		ft_error(int code)
{
	if (code == 1)
		std::cout << "Error: the strings are empty!" << std::endl;
	if (code == 2)
		std::cout << "Error: couldn't open the file!" << std::endl;
	if (code == 3)
		std::cout << "Error: couldn't create the file!" << std::endl;
	return(1);
}