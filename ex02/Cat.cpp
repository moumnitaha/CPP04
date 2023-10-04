/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:10:49 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/04 18:21:01 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat") {
    this->_brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat & copy) : AAnimal(copy) {
    this->_brain = new Brain(*copy._brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat & Cat::operator=(const Cat & copy) {
    AAnimal::operator=(copy);
    std::cout << "Cat copy assignment operator called" << std::endl;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "this Cat is meowing !!!" << std::endl;
}

Cat::~Cat() {
    delete this->_brain;
    std::cout << "Cat destructor called" << std::endl;
}