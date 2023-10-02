/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:10:36 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/02 17:54:03 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP_
# define _ANIMAL_HPP_

#include <iostream>
#include <string>

class Animal {
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const std::string & type);
		Animal(const Animal & copy);
		Animal & operator=(const Animal & copy);
		std::string getType(void) const;
		virtual void makeSound() const;
		virtual ~Animal();
};
#endif