/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:10:34 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/02 13:59:32 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
const Animal* meta = new Animal();
const Animal* i = new Cat();
const Animal* j = new Dog();
std::cout << i->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound! j->makeSound();
meta->makeSound();
return 0; }