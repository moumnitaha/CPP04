/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:10:44 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/04 17:23:26 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog & copy) : Animal(copy) {
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog & Dog::operator=(const Dog & copy) {
    Animal::operator=(copy);
    std::cout << "Dog copy assignment operator called" << std::endl;
    return (*this);
}

void Dog::makeSound() {
    std::cout << "this Dog is barking !!!" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}