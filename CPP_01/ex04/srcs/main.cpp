/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:29:46 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 15:29:47 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main()
{
	replace("test1", "Mancha", "comarca");

	replace("test2", "bueno", "malo");

	replace("test3", "Alex", "Santiago");

	return (0);
}
