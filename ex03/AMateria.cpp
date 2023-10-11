/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:50:12 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/11 12:54:06 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
    std::cout << "AMateria default consrtuctor called" << std::endl;
}

AMateria::AMateria(const AMateria & copy) {
    this->operator=(copy);
    std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::AMateria(const std::string & type) : _type(type) {
    std::cout << "AMateria parameterized constructor called" << std::endl;
}

AMateria & AMateria::operator=(const AMateria & copy) {
    this->_type = copy._type;
    std::cout << "AMateria copy assignment operator called" << std::endl;
    return (*this);
}

std::string const & AMateria::getType() const {
    return (this->_type);
}

AMateria::~AMateria() {
    std::cout << "AMateria destructor called" << std::endl;
}