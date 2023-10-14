/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:55:33 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/14 18:00:01 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << "WrongAnimal default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string & type) : _type(type)
{
    std::cout << "WrongAnimal Parameterized Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & copy)
{
    *this = copy;
    std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & copy)
{
    this->_type = copy._type;
    std::cout << "WrongAnimal Copy assignment Operator Called" << std::endl;
    return (*this);
}

std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Making a sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called" << std::endl;
}
