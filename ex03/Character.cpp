/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:42:54 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/11 15:59:05 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _inventory() {
    std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const std::string & name) : _name(name), _inventory() {
    std::cout << "Character parameterized constructor called" << std::endl;
}

Character::Character(const Character & copy) {
    this->operator=(copy);
    std::cout << "Character copy constructor called" <<std::endl;
}

Character & Character::operator=(const Character & copy) {
    this->_name = copy._name;
    for (int i = 0; i < 4; i++)
    {
        if (copy._inventory[i])
            this->_inventory[i] = copy._inventory[i];
    }
    std::cout << "Character copy assignment called" << std::endl;
    return (*this);
}

std::string const & Character::getName() const {
    return (this->_name);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!_inventory[i])
			_inventory[i] = m;
	}
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4)
    	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4)
		this->_inventory[idx]->use(target);
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
    std::cout << "Character destructor called" << std::endl;
}