/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:10:51 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/18 17:07:01 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP_
# define _CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain*	_brain;
    public:
		Cat();
		Cat(const Cat & copy);
		Cat & operator=(const Cat & copy);
		void makeSound() const ;
		void getIdeas(const int & index) const;
		void setIdeas(const int & index, const std::string & idea);
		~Cat();
};
#endif