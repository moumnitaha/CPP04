/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:08:35 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/04 14:51:30 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
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
}

void Brain::getIdea(const int & index) {
    if (index >= 0 && index < 100)
        std::cout << "THE IDEA: " << _ideas[index] << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}