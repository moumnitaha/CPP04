/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:26:10 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/04 18:20:04 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal") {
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal & copy) {
    this->operator=(copy);
    std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string & type) : _type(type) {
    std::cout << "AAnimal default (type) constructor called" << std::endl;
}

AAnimal & AAnimal::operator=(const AAnimal & copy) {
    this->_type = copy._type;
    std::cout << "AAnimal copy assignment operator called" << std::endl;
    return (*this);
}

std::string AAnimal::getType(void) const {
    return(this->_type);
}

// void AAnimal::makeSound() const {
//     std::cout << this->_type << " is making a sound!" << std::endl;
// }

AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor called" << std::endl;
}