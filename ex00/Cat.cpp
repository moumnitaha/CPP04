/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:10:49 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/02 14:07:28 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat & copy) : Animal(copy) {
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat & Cat::operator=(const Cat & copy) {
    Animal::operator=(copy);
    std::cout << "Cat copy assignment operator called" << std::endl;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "this Cat is meowing !!!" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}