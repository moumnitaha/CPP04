/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:47:20 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/11 15:35:59 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _materias() {
    std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource & copy) : _materias() {
    this->operator=(copy);
    std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource & MateriaSource::operator=(const MateriaSource & copy) {
    for (int i = 0; i < 4; i++)
    {
    	if (copy._materias[i])
			this->_materias[i] = copy._materias[i];
    }
    std::cout << "MateriaSource assignment operator called" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
    {
    	if (this->_materias[i])
			delete this->_materias[i];
    }
    std::cout << "MateriaSource destructor called" << std::endl;
}