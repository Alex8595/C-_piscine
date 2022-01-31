/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:28:10 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/31 19:05:36 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
# define __MATERIASOURCE_HPP__
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	protected:
		AMateria				*inv_materias[4];
		int						idx_learned;

	public:
		virtual void			learnMateria(AMateria *mat);
		virtual AMateria*		createMateria(std::string const &type);

		MateriaSource();
		~MateriaSource();
};

#endif
