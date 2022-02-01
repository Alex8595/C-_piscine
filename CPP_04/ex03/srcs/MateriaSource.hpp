/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:28:10 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/01 19:09:52 by ahernand         ###   ########.fr       */
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

		void					operator=(const MateriaSource &src);
		MateriaSource(const MateriaSource &src);
		MateriaSource();
		~MateriaSource();
};

#endif
