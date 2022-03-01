/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:32:17 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 13:32:19 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/*
**      Get & Set
*/

void		PhoneBook::setCurrent(int g)
{
    this->current = g;
}

void		PhoneBook::setTotal(int g)
{
    this->total = g;
}

int			PhoneBook::getCurrent()
{
    return (this->current);
}

int			PhoneBook::getTotal()
{
    return (this->total);
}

/*
**      Con & Des
*/

PhoneBook::PhoneBook()
{
    this->current = -1;
    this->total = 0;
}

PhoneBook::~PhoneBook()
{

}