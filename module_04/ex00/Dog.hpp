/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 11:27:04 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/18 11:27:26 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_DOG_HPP
#define MODULE_04_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:

    Dog();
    Dog(const Dog &src);
    Dog & operator=( const Dog &rhs );
    virtual ~Dog();

    virtual void makeSound() const;
};


#endif //MODULE_04_DOG_HPP
