/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:47:34 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/22 19:47:35 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_HPP__
# define __MUTANTSTACK_HPP__
# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator	begin()
		{
			return (this->c.begin());
		}

		iterator	end()
		{
			return (this->c.end());
		}
		
		reverse_iterator	rend()
		{
			return (this->c.rend());
		}
		
		reverse_iterator	rbegin()
		{
			return (this->c.rbegin());
		}
		
		const_iterator	cend()
		{
			return (this->c.cend());
		}
		
		const_iterator	cbegin()
		{
			return (this->c.cbegin());
		}
		
		const_iterator	crend()
		{
			return (this->c.crend());
		}
		
		const_iterator	crbegin()
		{
			return (this->c.crbegin());
		}	

		MutantStack<T>			&operator=(MutantStack<T> &ref)
		{
			MutantStack<T>::iterator it = ref.begin();
			MutantStack<T>::iterator ite = ref.end();

			while (!(this->empty()))
			{
				this->pop();
			}

			while (it != ite)
			{
				this->push(*it);
				it++;
			}
			return (*this);
		}

		MutantStack(MutantStack<T> &ref)
		{
			MutantStack<T>::iterator it = ref.begin();
			MutantStack<T>::iterator ite = ref.end();

			while (it != ite)
			{
				this->push(*it);
				it++;
			}
		}

		MutantStack() {		}
		virtual ~MutantStack() {	}
};

#endif