/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:42:59 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/06 14:44:06 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_HPP_
# define _CHARACTER_HPP_

#include "ICharacter.hpp"

class Character : public ICharacter {
	public:
		Character();
		Character(const Character & copy);
		Character & operator=(const Character & copy);
		~Character();
};

#endif