/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:37:28 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 14:37:29 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>

int main()
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;


	std::cout << "String adress:    "	<< std::setw(25) << &string << std::endl;
	std::cout << "Pointer adress:   "	<< std::setw(25) << stringPTR << std::endl;
	std::cout << "Reference adress: "	<< std::setw(25) << &stringREF << std::endl;


	std::cout <<  std::endl;


	std::cout << "String by pointer:  "  << std::setw(25) << *stringPTR << std::endl;
	std::cout << "String by Reference:"  << std::setw(25) << stringREF << std::endl;

	return (0);
}
