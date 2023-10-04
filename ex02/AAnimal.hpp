/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:10:36 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/04 18:19:51 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AANIMAL_HPP_
# define _AANIMAL_HPP_

#include <iostream>
#include <string>

class AAnimal {
	protected:
		std::string _type;
	public:
		AAnimal();
		AAnimal(const std::string & type);
		AAnimal(const AAnimal & copy);
		AAnimal & operator=(const AAnimal & copy);
		std::string getType(void) const;
		virtual void makeSound() const = 0;
		virtual ~AAnimal();
};
#endif