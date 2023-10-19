/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:26:10 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/19 10:38:26 by tmoumni          ###   ########.fr       */
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

Animal::Animal(const std::string & type) : _type(type) {
    std::cout << "Animal Parameterized constructor called" << std::endl;
}

Animal & Animal::operator=(const Animal & copy) {
    this->_type = copy._type;
    std::cout << "Animal copy assignment operator called" << std::endl;
    return (*this);
}

std::string Animal::getType(void) const {
    return(this->_type);
}

void Animal::makeSound() const {
    std::cout << this->_type << " is making a sound!" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}