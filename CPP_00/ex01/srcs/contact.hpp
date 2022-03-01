/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:32:37 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 13:33:25 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>

class	contact
{
	private:
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		darkest_secret;
		std::string		phone_number;

	public:
		std::string 	getFirstName();
		std::string		getLastName();
		std::string		getNickname();
		std::string		getDarkestSecret();
		std::string		getPhoneNumber();

		void			setFirstName(std::string g);
		void			setLastName(std::string g);
		void			setNickname(std::string g);
		void			setDarkestSecret(std::string g);
		void			setPhoneNumber(std::string g);

		contact();
		~contact();
};

#endif
