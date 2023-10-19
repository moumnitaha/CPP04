/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:55:45 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/14 17:57:17 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGANIMAL_HPP_
# define _WRONGANIMAL_HPP_

#include <iostream>
#include <string>

class WrongAnimal {
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const std::string & type);
        WrongAnimal(const WrongAnimal & copy);
        WrongAnimal & operator=(const WrongAnimal & copy);
        std::string getType(void) const;
        void makeSound() const;
        virtual ~WrongAnimal();
};

#endif