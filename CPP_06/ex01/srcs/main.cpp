/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:25:37 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/12 17:25:37 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	raw;

	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data*		deserialize(uintptr_t raw)
{
	Data	*ptr;

	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

int main()
{
	Data				before;
	uintptr_t			raw;
	const Data			*after;

	before.i = 42;
	before.c = 'A';
	before.str = "It's me, Mario";


	std::cout << "Pointer on Data before: " << &before << std::endl;

	raw = serialize(&before);

	std::cout << "Pointer on an uintptr_t: " << raw << std::endl;

	after = deserialize(raw);

	std::cout << "Pointer on Data before: " << after << std::endl << std::endl;


	std::cout << after->i << std::endl;
	std::cout << after->c << std::endl;
	std::cout << after->str << std::endl;
	
	return (0);
}
