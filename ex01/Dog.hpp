/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:10:47 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/04 12:14:08 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP_
# define _DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain*	_brain;
    public:
		Dog();
		Dog(const Dog & copy);
		Dog & operator=(const Dog & copy);
		void makeSound() const;
		~Dog();
};
#endif