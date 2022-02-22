/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:51:39 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 15:51:40 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
	Karen	k1;

	k1.complain("DEBUG");
	k1.complain("DEBUG");
	k1.complain("DEBUG");
	k1.complain("DEBUG");
	k1.complain("DEBUG");
	k1.complain("DEBUG");
	k1.complain("DEBUG");
	k1.complain("INFO");
	k1.complain("INFO");
	k1.complain("INFO");
	k1.complain("INFO");
	k1.complain("INFO");
	k1.complain("WARNING");
	k1.complain("WARNING");
	k1.complain("WARNING");
	k1.complain("WARNING");
	k1.complain("WARNING");
	k1.complain("WARNING");
	k1.complain("WARNING");
	k1.complain("ERROR");
	k1.complain("ERROR");
	k1.complain("ERROR");
	k1.complain("ERROR");
	k1.complain("ERROR");
	k1.complain("ERROR");
	k1.complain("ERROR");
	k1.complain("ERROR");


	std::cout << std::endl;


	k1.complain("ERROR");
	k1.complain("WARNING");
	k1.complain("INFO");
	k1.complain("DEBUG");

	return (0);
}
