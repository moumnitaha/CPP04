/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:46:12 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/14 15:14:50 by tmoumni          ###   ########.fr       */
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
    AMateria *ice = new Ice();
    src->learnMateria(ice);
    src->learnMateria(NULL);
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    std::cout<<std::endl << "-----EQUIP NULL MATERIA-----" <<std::endl;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    me->equip(NULL);

    std::cout<<std::endl << "-----CREATE INVALID MATERIA-----" <<std::endl;
    tmp = src->createMateria("MINE");
    me->equip(tmp);

    std::cout<<std::endl << "-----EQUIPE THE SAME MATERIA-----" <<std::endl;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->equip(tmp);
    std::cout<<std::endl << "-----UNEQUIPE AN INVALID MATERIA-----" <<std::endl;
    me->unequip(3);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);
    std::cout<<std::endl << "-----USE AN INVALID MATERIA-----" <<std::endl;
    me->use(3, *bob);
    me->use(5, *bob);

    delete bob;
    delete me;
    delete src;
    return 0;
}