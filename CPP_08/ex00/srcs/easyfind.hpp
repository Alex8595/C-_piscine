/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:05:18 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/21 17:01:30 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
# define __EASYFIND_HPP__
# include <iostream>
# include <map>
# include <vector>
# include <list>

template<typename T>
typename T::iterator easyfind(T conteiner, int value)
{
	typename T::iterator		it;
	typename T::iterator		ite;

	it = conteiner.begin();
	ite = conteiner.end();
	while (it != ite)
	{
		if (*it == value)
			return (it);
		it++;
	}
	throw (std::runtime_error("Error: Value is not in conteiner."));
}
#endif
