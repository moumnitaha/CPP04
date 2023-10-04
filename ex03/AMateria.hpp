/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:47:52 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/04 18:51:33 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AMATERIA_HPP_
# define _AMATERIA_HPP_

#include <iostream>
#include <string>

class AMateria {
	protected:
	public:
		AMateria();
		AMateria(const AMateria & copy);
		AMateria & operator=(const AMateria & copy);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		~AMateria();
};

#endif