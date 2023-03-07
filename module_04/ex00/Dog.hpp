//
// Created by Raphael Mamison on 3/4/23.
//

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
