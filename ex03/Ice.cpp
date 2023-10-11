/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:40:09 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/11 14:57:14 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice & copy) : AMateria(copy) {
    std::cout << "Ice copy assignment operator called" << std::endl;
}

Ice & Ice::operator=(const Ice & copy) {
    AMateria::operator=(copy);
    std::cout << "Ice assignmemt operator called" << std::endl;
    return (*this);
}

AMateria* Ice::clone() const {
    return(new Ice(*this));
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice() {
    std::cout << "Ice destructor called" << std::endl;
}