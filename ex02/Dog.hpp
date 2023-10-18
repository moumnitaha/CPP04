/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:10:47 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/18 17:06:52 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP_
# define _DOG_HPP_

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	private:
		Brain*	_brain;
    public:
		Dog();
		Dog(const Dog & copy);
		Dog & operator=(const Dog & copy);
		void makeSound() const;
		void getIdeas(const int & index) const;
		void setIdeas(const int & index, const std::string & idea);
		~Dog();
};
#endif