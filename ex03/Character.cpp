/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:42:54 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/11 18:07:50 by tmoumni          ###   ########.fr       */
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
		if (!_inventory[i] && m) {
			_inventory[i] = m;
            std::cout << "EQUIPE: " << m->getType() << " at: " << i << std::endl;
            return ;
        }
	}
    if (m)
        std::cout << "MAteria is full" << std::endl;
    else
        std::cout << "MAteria is invalid" << std::endl;
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4 && _inventory[idx])
    {
        std::cout << "UNEQUIPE: " << _inventory[idx]->getType() << " at: " << idx << std::endl;
    	_inventory[idx] = NULL;
        return ;
    }
    std::cout << "INVALID MATERIA INDEX: " << idx << " TO UNEQUIP!" << std::endl;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4)
    {
		if (this->_inventory[idx])
            this->_inventory[idx]->use(target);
        else
            std::cout << "CAN'T USE " << target.getName() << " MATERIA" << std::endl;
        return;
    }
    std::cout << "INVALID MATERIA INDEX: " << idx << " TO USE!" << std::endl;
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
    std::cout << "Character destructor called" << std::endl;
}