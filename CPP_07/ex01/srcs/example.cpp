/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_class.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:59:56 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/16 17:59:57 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "example.hpp"

/*
**			Get & Set
*/

std::string	example::get_name() const
{
	return (this->name);
}




/*
**			Operators
*/

void		example::operator=(const example &given_instance)
{
	this->name = given_instance.get_name();
}

std::ostream			&operator<<(std::ostream &stream, example const &ref)
{
    stream << ref.get_name();
	return (stream);
}




/*
**			C & D
*/

example::example(const example &given_instance)
{
	this->name = given_instance.get_name();
}

example::example(std::string g_name)
{
	this->name = g_name;
}

example::example()
{
	this->name = "Default";;
}

example::~example()
{

}