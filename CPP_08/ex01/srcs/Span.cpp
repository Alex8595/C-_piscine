/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:04:12 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/22 14:04:13 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
**			Spans
*/

int		Span::shortestSpan()
{
	if (n_stored < 2)
		throw (std::runtime_error("Error: Not enough values to run shortestSpan."));

	int	span;
	int	diff;
	
	this->list.sort();

	std::list<int>::const_iterator		ita = list.begin();
	std::list<int>::const_iterator		itb = list.begin();
	std::list<int>::const_iterator		ite = list.end();

	itb++;
	span = *ita - *itb;
	if (span < 0)
			span *= -1;
	ita++;
	itb++;
	while (itb != ite)
	{
		diff = *ita - *itb;
		if (diff < 0)
			diff *= -1;
		if (diff < span)
			span = diff;
		ita++;
		itb++;
	}
	return (span);
}

int		Span::longestSpan()
{
	if (n_stored < 2)
		throw (std::runtime_error("Error: Not enough values to run longestSpan."));

	list.sort();
	std::list<int>::const_iterator		it = list.begin();
	std::list<int>::const_iterator		ite = list.end();

	return (*(--ite) - *it);
}




/*
**			Add Numbers
*/

void	Span::addNumber(int g_n)
{
	
	if (n_stored >= n_total)
		throw (std::runtime_error("Error: Can't add more numbers, filled all the N spots."));
	else
		list.push_back(g_n);
	n_stored++;
}




/*
**		Get & Set
*/

int		Span::getNStored() const
{
	return (this->n_stored);
}

int		Span::getNTotal() const
{
	return (this->n_total);
}




/*
**		Operators
*/

Span	&Span::operator=(const Span &ref)
{
	list.clear();

	n_total = ref.getNTotal();
	n_stored = ref.getNStored();

	std::list<int>::const_iterator		it = ref.list.begin();
	std::list<int>::const_iterator		ite = ref.list.end();

	while (it != ite)
	{
		list.push_back(*it);
		it++;
	}
	return (*this);
}




/*
**		C & D
*/

Span::Span(const Span &ref)
{
	n_total = ref.getNTotal();
	n_stored = ref.getNStored();

	std::list<int>::const_iterator		it = ref.list.begin();
	std::list<int>::const_iterator		ite = ref.list.end();

	while (it != ite)
	{
		list.push_back(*it);
		it++;
	}
}

Span::Span(unsigned int N)
{
	n_total = N;
	n_stored = 0;
}

Span::Span()
{
	n_total = 5;
	n_stored = 0;
}

Span::~Span()
{

}
