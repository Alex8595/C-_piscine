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
	private:
		T				*arr;
		long long		_size;

	public:

		/*
		**				M_FUNCTIONS
		*/

		long long		size() const
		{
			return (_size);
		}




		/*
		**				Operators
		*/

		void			operator=(const Array &ref)
		{
			if (_size != 0)
				delete []arr;

			_size = ref.size();

			arr = new T[ref.size()];

			for (long long i; i < ref.size(); i++)
				arr[i] = ref[i];
		}

		T				&operator[](const int	&idx)
		{
			if (idx >= 0 && idx < size())
				return (arr[idx]);
			else
				throw (std::out_of_range( "Out of bonds index." ));
		}

		T				&operator[](const int	&idx) const
		{
			if (idx >= 0 && idx < size())
				return (arr[idx]);
			else
				throw (std::out_of_range( "Out of bonds index." ));
		}




		/*
		**				C & D
		*/

		Array(const Array &ref)
		{
			_size = ref.size();
			arr = new T[ref.size()];

			for (long long i = 0; i < ref.size(); ++i)
				arr[i] = ref[i];
		}

		Array(const unsigned int g_n)
		{
			_size = g_n;
			if (g_n == 0)
				arr = NULL;
			else
				arr = new T[g_n];
		}

		Array()
		{
			_size = 0;
			arr = NULL;
		}

		~Array()
		{
			delete []arr;
		}

};

#endif