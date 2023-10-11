/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:46:12 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/11 18:07:34 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main(void) {
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);

    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->unequip(3);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(5, *bob);

    delete bob;
    delete me;
    delete src;
    
    return 0;
}