/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:42:59 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/11 18:43:05 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_HPP_
# define _CHARACTER_HPP_

#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria* _inventory[4];
	public:
		Character();
		Character(const Character & name);
		Character(const std::string & copy);
		Character & operator=(const Character & copy);
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		bool isEquipedMateria(AMateria *m);
		~Character();
};

#endif