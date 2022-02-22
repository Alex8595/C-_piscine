/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:32:24 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 13:32:25 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# include <iostream>
# include <iomanip>
# include "contact.hpp"

class	PhoneBook
{
	public:
		contact		ppl[8];
		int			current;
		int			total;
	
		PhoneBook();
};

#endif
