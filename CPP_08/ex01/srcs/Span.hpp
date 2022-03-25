/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:04:19 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/22 14:04:20 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Span_HPP__
# define __Span_HPP__
# include <iostream>
# include <list>
# include <vector>

class Span
{
	private:
		unsigned int		n_stored;
		unsigned int		n_total;
		std::list<int>		list;

	public:
		int		shortestSpan();
		int		longestSpan();

		void	addNumber(int g_n);
		
		template <typename T>
		void	addNumber(T& it, T& ite)
		{
			while (it != ite)	
			{
				addNumber(*it);
				it++;
			}
		}

		int		getNTotal() const;
		int		getNStored() const;


		Span	&operator=(const Span &ref);

		Span(const Span &ref);
		Span(unsigned int N);
		Span();
		~Span();
};

#endif
