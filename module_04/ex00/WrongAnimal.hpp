//
// Created by Raphael Mamison on 3/4/23.
//

#ifndef MODULE_04_WRONGANIMAL_HPP
#define MODULE_04_WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
public:

    WrongAnimal();
    WrongAnimal(const WrongAnimal &src);
    WrongAnimal & operator=( const WrongAnimal &rhs );
    virtual ~WrongAnimal();

    std::string getType() const;
    void makeSound() const;

protected:

    std::string type;
};


#endif //MODULE_04_WRONGWrongAnimal_HPP
