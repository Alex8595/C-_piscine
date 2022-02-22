/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:38:02 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 18:38:03 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat              b1("Samantha", 1);
	ShrubberyCreationForm   s1("Garden");

	//              Execute Action ShrubberyCreationForm
	std::cout << "_ Execute Action ShrubberyCreationForm"<< std::endl;

	s1.beSigned(b1);
	s1.execute(b1);
	std::cout << s1 << std::endl;
	std::cout << std::endl;


	return (0);
}
