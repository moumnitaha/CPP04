/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:10:47 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/04 17:23:48 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP_
# define _DOG_HPP_

#include "Animal.hpp"

class Dog : public Animal {
    public:
		Dog();
		Dog(const Dog & copy);
		Dog & operator=(const Dog & copy);
		void makeSound() ;
		~Dog();
};
#endif