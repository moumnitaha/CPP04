/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:10:44 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/19 11:55:56 by tmoumni          ###   ########.fr       */
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
    *this->_brain = *copy._brain;
    std::cout << "Dog copy assignment operator called" << std::endl;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "this Dog is barking !!!" << std::endl;
}

void Dog::getIdeas(const int & index) const {
    this->_brain->getIdea(index);
}

void Dog::setIdeas(const int & index, const std::string & idea) {
    this->_brain->setIdea(index, idea);
}

Dog::~Dog() {
    delete this->_brain;
    std::cout << "Dog destructor called" << std::endl;
}