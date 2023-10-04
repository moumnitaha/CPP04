/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:10:44 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/04 14:29:38 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    this->_brain = new Brain();
    this->_brain->setIdea(0, "DOG IDEA");
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog & copy) : Animal(copy) {
    this->_brain = new Brain(*copy._brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog & Dog::operator=(const Dog & copy) {
    Animal::operator=(copy);
    *this->_brain = *copy._brain;
    std::cout << "Dog copy assignment operator called" << std::endl;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "this Dog is barking !!!" << std::endl;
}

Dog::~Dog() {
    std::cout << "LETS DESTROY" << std::endl;
    this->_brain->getIdea(0);
    delete this->_brain;
    std::cout << "Dog destructor called" << std::endl;
}