/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:41:10 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/11 14:56:13 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure & copy) : AMateria(copy) {
    std::cout << "Cure copy assignment operator called" << std::endl;
}

Cure & Cure::operator=(const Cure & copy) {
    AMateria::operator=(copy);
    std::cout << "Cure assignmemt operator called" << std::endl;
    return (*this);
}

AMateria* Cure::clone() const {
    return (new Cure(*this));
}

void Cure::use( ICharacter& target ) {
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure() {
    std::cout << "Cure destructor called" << std::endl;
}