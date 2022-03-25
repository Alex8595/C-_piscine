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
# include <algorithm>
# include <list>
# include <map>
# include <vector>

template<typename T>
typename T::iterator easyfind(T conteiner, int value)
{
	typename T::iterator		it;
	typename T::iterator		ite;
	typename T::iterator		to_find;

	it = conteiner.begin();
	ite = conteiner.end();
	
	to_find = std::find(it, ite, value);
	if (to_find != ite)
			return (to_find);
	throw (std::runtime_error("Error: Value is not in conteiner."));
}
#endif
