/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Forms.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:52:32 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/16 17:52:32 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Forms.hpp"

Forms::Forms(std::string g_name, int gr_sign, int gr_exec) : name(g_name), grade_req_sign(gr_sign), grade_req_exec(gr_exec)
{
    is_signed = false;
}