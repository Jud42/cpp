/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:18:17 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/04 23:10:15 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_DOG_HPP
#define MODULE_04_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

public:

    Dog();
    Dog(const Dog &src);
    Dog & operator=( const Dog &rhs );
    virtual ~Dog();

    virtual void makeSound() const;

private:

	Brain *_brain;
};

//juste pour afficher le type d'instance qui print
//std::ostream & operator<<(std::ostream & os, const Dog &obj);

#endif //MODULE_04_DOG_HPP
