/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 19:29:22 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/16 19:30:20 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__
# include <iostream>

template <class T>
class	Array
{




};

template <class T>
class mypair
{
	T values [2];
	
	public:
		mypair (T first, T second)
    	{
			values[0] = first;
			values[1] = second;
		}
};

#endif