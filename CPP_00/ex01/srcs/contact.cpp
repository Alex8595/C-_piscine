/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:55:12 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/25 13:55:14 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

/*
**      Get & Set
*/

std::string 	contact::getFirstName()
{
    return (first_name);
}

std::string		contact::getLastName()
{
    return (last_name);
}

std::string		contact::getNickname()
{
    return (nickname);
}

std::string		contact::getDarkestSecret()
{
    return (darkest_secret);
}

std::string		contact::getPhoneNumber()
{
    return (phone_number);
}

void			contact::setFirstName(std::string g)
{
    this->first_name = g;
}

void			contact::setLastName(std::string g)
{
    this->last_name = g;
}

void			contact::setNickname(std::string g)
{
    this->nickname = g;
}

void			contact::setDarkestSecret(std::string g)
{
    this->darkest_secret = g;
}

void			contact::setPhoneNumber(std::string g)
{
    this->phone_number = g;
}

/*
**      Con & Des
*/

contact::contact()
{

}

contact::~contact()
{

}