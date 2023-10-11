/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:47:30 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/11 15:26:38 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MATERIASOURCE_HPP_
# define _MATERIASOURCE_HPP_

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria* _materias[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource & copy);
		MateriaSource & operator=(const MateriaSource & copy);
		virtual void learnMateria(AMateria* m);
		virtual AMateria* createMateria(std::string const & type);
		~MateriaSource();
};

#endif