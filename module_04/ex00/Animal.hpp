//
// Created by Raphael Mamison on 3/4/23.
//

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
    virtual void makeSound() const;

protected:

    std::string type;
};

#endif //MODULE_04_ANIMAL_HPP
