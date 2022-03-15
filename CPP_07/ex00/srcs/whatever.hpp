/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:03:21 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/15 18:03:22 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_HPP
# define __WHATEVER_HPP
# include <iostream>

template < typename T >
void swap( T &x, T & y )
{
	T aux;

	aux = x;
	x = y;
	y = aux;
}

template < typename T >
T min( T const &x, T const & y )
{
	if (x < y)
		return (x);
	return (y);
}

template < typename T >
T max( T const &x, T const & y )
{
	if (x > y)
		return (x);
	return (y);
}

#endif