/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_class.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:59:59 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/16 18:00:00 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class example
{
	private:
		std::string		name;

	public:
		std::string		get_name() const;
		void			operator=(const example &given_instance);

		example(const example &given_instance);
		example(std::string g_name);
		example();
		~example();
};

std::ostream &operator<<(std::ostream &stream, example const &object);
