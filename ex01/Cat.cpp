/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:10:49 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/19 12:07:16 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    this->_brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat & copy) : Animal(copy) {
    this->_brain = new Brain(*copy._brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat & Cat::operator=(const Cat & copy) {
    Animal::operator=(copy);
    *this->_brain = *copy._brain;
    std::cout << "Cat copy assignment operator called" << std::endl;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "this Cat is meowing !!!" << std::endl;
}

void Cat::getIdeas(const int & index) const {
    this->_brain->getIdea(index);
}

void Cat::setIdeas(const int & index, const std::string & idea) {
    this->_brain->setIdea(index, idea);
}

Cat::~Cat() {
    delete this->_brain;
    std::cout << "Cat destructor called" << std::endl;
}