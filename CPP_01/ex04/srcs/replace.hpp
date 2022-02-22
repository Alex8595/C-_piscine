/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:29:57 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 15:29:58 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __REPLACE_HPP__
# define __REPLACE_HPP__
# include <iostream>
# include <fstream>

int		replace(std::string infile, std::string s1, std::string s2);
int		ft_error(int code);

#endif
