/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:40:12 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/06 14:44:21 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ICE_HPP_
# define _ICE_HPP_

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(const Ice & copy);
		Ice & operator=(const Ice & copy);
		~Ice();
};

#endif