/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:08:35 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/19 12:08:35 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : _ideas() {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain & copy) {
    this->operator=(copy);
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain & Brain::operator=(const Brain & copy) {
    for (int i = 0; i < 100; i++)
    {
        this->_ideas[i] = copy._ideas[i];
    }
    std::cout << "Brain copy assignment constructor called" << std::endl;
    return (*this);
}

void Brain::setIdea(const int & index, const std::string & idea) {
    if (index >= 0 && index < 100)
        _ideas[index] = idea;
    else
        std::cout << "Index out of range" << std::endl;
}

void Brain::getIdea(const int & index) {
    if (index >= 0 && index < 100){
        std::cout << " -----------------------" << std::endl;
        std::cout << "| THE IDEA: " << _ideas[index] << std::endl;
        std::cout << " -----------------------" << std::endl;
    }
    else
        std::cout << "Index out of range" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}