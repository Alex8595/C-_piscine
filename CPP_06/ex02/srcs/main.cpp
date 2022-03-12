/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:12:29 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/12 18:12:30 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	srand((unsigned int)time(NULL));
	int v1 = rand() % 3 + 1;

	if (v1 == 1)
		return (new A);
	if (v1 == 2)
		return (new B);
	else
		return (new C);
}

void identify(Base* p)
{



}

void identify(Base& p)
{



	
}

int main()
{




	return (0);
}