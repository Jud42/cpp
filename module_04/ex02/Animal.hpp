/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:22:20 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/05 11:02:13 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_ANIMAL_HPP
#define MODULE_04_ANIMAL_HPP

#include <iostream>

class Animal {

public:

    Animal();
    Animal(const Animal &src);
    Animal & operator=( const Animal &rhs );
    virtual ~Animal();

    std::string getType() const;
    virtual void makeSound() const = 0;

protected:

    std::string _type;
};

#endif //MODULE_04_ANIMAL_HPP
