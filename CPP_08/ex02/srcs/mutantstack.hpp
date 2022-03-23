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

		iterator	begin()
		{
			return (this->c.begin());
		}

		iterator	end()
		{
			return (this->c.end());
		}
		
		MutantStack			&operator=(const MutantStack &ref)
		{
			MutantStack<T>::iterator it = ref.begin();
			MutantStack<T>::iterator ite = ref.end();

			while (!(ref.empty()))
				this->pop;

			while (it != ite)
			{
				this->push(*it);
				it++;
			}
			return (*this);
		}

		MutantStack(const MutantStack &ref)
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