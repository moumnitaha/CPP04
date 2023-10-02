/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:26:10 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/02 14:06:31 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal & copy) {
    this->operator=(copy);
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::Animal(const std::string & type) {
    this->_type = type;
    std::cout << "Animal default (name) constructor called" << std::endl;
}

Animal & Animal::operator=(const Animal & copy) {
    this->_type = copy._type;
    std::cout << "Animal assignment operator constructor called" << std::endl;
    return (*this);
}

std::string Animal::getType(void) const {
    // std::cout << "I'm a " << this->_type << std::endl;
    return(this->_type);
}

void Animal::makeSound() const {
    std::cout << this->_type << " is making a sound!" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}