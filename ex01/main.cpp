/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:10:34 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/18 17:07:14 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	{
		std::cout << "-----Check deep copy of Cat class using copy constructor-----" << std::endl;
		Cat *catA = new Cat();
		catA->setIdeas(0, "Idea of catA");

		Cat *catB = new Cat(*catA);

		catA->getIdeas(0);
		delete catA;
		catB->getIdeas(0);
		delete catB;
	}
	{
		std::cout << "-----Check deep copy of Cat class using assignment operator overload-----" << std::endl;
		Cat *catA = new Cat();
		Cat *catB = new Cat();

		catB->setIdeas(1, "Idea of catB");

		*catA = *catB;

		catB->getIdeas(1);
		delete catB;
		catA->getIdeas(1);
		delete catA;
	}
	
	return 0;
}