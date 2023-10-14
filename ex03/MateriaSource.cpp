/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:47:20 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/14 18:37:00 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _learned_materias() {
    std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource & copy) : _learned_materias() {
    this->operator=(copy);
    std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource & MateriaSource::operator=(const MateriaSource & copy) {
    for (int i = 0; i < 4; i++)
    {
    	if (copy._learned_materias[i])
			this->_learned_materias[i] = copy._learned_materias[i]->clone();
    }
    std::cout << "MateriaSource assignment operator called" << std::endl;
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m) {
	if (isLearnedMateria(m)) {
		std::cout << "MATERIA ALREADY LEARNED!" << std::endl;
		return ;
	}
    for (int i = 0; i < 4; i++)
    {
        if (!_learned_materias[i] && m){
			_learned_materias[i] = m;
			std::cout << "MAteria Learned at " << i << std::endl;
			return ;
		}
    }
	if (m)
		std::cout << "MATRIAS FULL" << std::endl;
	else
		std::cout << "INVALID MATERIA TO LEARN!" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++)
    {
    	if (this->_learned_materias[i] && this->_learned_materias[i]->getType() == type)
			return this->_learned_materias[i]->clone();
    }
	std::cout << "INVALID AMATERIA TYPE: " << type << std::endl;
	return 0;
}

bool MateriaSource::isLearnedMateria(AMateria *m) {
    for (int i = 0; i < 4; i++)
    {
        if (m && _learned_materias[i] == m)
			return true;
    }
    return false;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
    {
    	if (this->_learned_materias[i])
			delete this->_learned_materias[i];
    }
    std::cout << "MateriaSource destructor called" << std::endl;
}