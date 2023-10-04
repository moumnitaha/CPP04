/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:10:44 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/04 18:21:20 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog") {
    this->_brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog & copy) : AAnimal(copy) {
    this->_brain = new Brain(*copy._brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog & Dog::operator=(const Dog & copy) {
    AAnimal::operator=(copy);
    std::cout << "Dog copy assignment operator called" << std::endl;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "this Dog is barking !!!" << std::endl;
}

Dog::~Dog() {
    delete this->_brain;
    std::cout << "Dog destructor called" << std::endl;
}