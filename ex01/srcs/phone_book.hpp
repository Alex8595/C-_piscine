/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:15:31 by ahernand          #+#    #+#             */
/*   Updated: 2021/12/02 15:15:34 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# include <unistd.h>
# include <iostream>

class	contact
{
	public:
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		darkest_secret;
		int				phone_number;

};

class	phone_book
{
	public:
		phone_book() : current(0) {}
		contact		ppl[8];
		int			current;
};

int			abs_memcmp(std::string arr1, std::string arr2);
int			ft_error(std::string str);

int			ft_add(std::string str, phone_book *pb);
int			ft_search(std::string str);

#endif