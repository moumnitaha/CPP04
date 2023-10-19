/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:10:34 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/19 13:35:31 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

# define NBR_OF_ANIMALS 4

int main(void)
{
	Animal *Animals[NBR_OF_ANIMALS];
	for (int i = 0; i < NBR_OF_ANIMALS; i++)
	{
		if (i < (NBR_OF_ANIMALS / 2))
			Animals[i] = new Cat();
		else
			Animals[i] = new Dog();
	}
	std::cout << std::endl;
	for (int i = 0; i < NBR_OF_ANIMALS; i++)
	{
		delete Animals[i];
	}
	std::cout << "-----Check deep copy using Copy constructor-----" << std::endl;
	{
		Cat *catB = new Cat();
		catB->setIdeas(1, "Idea of catB");
		
		Cat *catA = new Cat(*catB);

		catB->getIdeas(1);
		delete catB;
		catA->getIdeas(1);
		delete catA;

		std::cout << "--TEST--" << std::endl;

		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	return 0;
}