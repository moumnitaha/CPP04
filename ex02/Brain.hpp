/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:08:37 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/04 18:21:39 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
# define _BRAIN_HPP_

#include "AAnimal.hpp"

class Brain {
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(const Brain & copy);
		Brain & operator=(const Brain & copy);
		void setIdea(const int & index, const std::string & idea);
		void getIdea(const int & index);
		~Brain();
};

#endif