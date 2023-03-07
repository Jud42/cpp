//
// Created by Raphael Mamison on 3/4/23.
//

#ifndef MODULE_04_CAT_HPP
#define MODULE_04_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

public:
    Cat();
    Cat(const Cat &src);
    Cat & operator=( const Cat &rhs );
    virtual ~Cat();

    virtual void makeSound() const;
};


#endif //MODULE_04_CAT_HPP
