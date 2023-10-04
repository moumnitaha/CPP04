/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:10:34 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/04 17:23:17 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	//  Animal* meta = new Animal();
	Animal* i = new Cat();
	Animal* j = new Dog();
	// std::cout << meta->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	// meta->makeSound();
	i->makeSound();
	j->makeSound();
	delete j;
	delete i;
	// delete meta;
	return 0;
}