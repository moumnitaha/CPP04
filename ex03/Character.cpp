/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:42:54 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/18 18:51:47 by tmoumni          ###   ########.fr       */
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
            this->_inventory[i] = copy._inventory[i]->clone();
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
            if (isEquipedMateria(m))
			    _inventory[i] = m->clone();
            else
                _inventory[i] = m;
            std::cout << "EQUIPE " << m->getType() << " AT INDEX: " << i << std::endl;
            return ;
        }
	}
    if (m)
		std::cout << "MATRIAS FULL" << std::endl;
	else
		std::cout << "INVALID MATERIA TO EQUIP!" << std::endl;
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4)
    {
        if (this->_inventory[idx]) {
            std::cout << "UNEQUIPE: " << _inventory[idx]->getType() << " at: " << idx << std::endl;
    	    _inventory[idx] = NULL;
        }
        else
            std::cout << "MATERIA TO UNEQUIP INDEX: " << idx << " IS EMPTY!" << std::endl;
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
            std::cout << "MATERIA TO USE INDEX: " << idx << " IS EMPTY!" << std::endl;
        return;
    }
    std::cout << "INVALID MATERIA INDEX: " << idx << " TO USE!" << std::endl;
}

bool Character::isEquipedMateria(AMateria *m) {
    for (int i = 0; i < 4; i++)
    {
        if (m && _inventory[i] == m)
			return true;
    }
    return false;
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
    std::cout << "Character destructor called" << std::endl;
}