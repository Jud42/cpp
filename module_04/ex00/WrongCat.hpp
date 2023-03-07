//
// Created by Raphael Mamison on 3/4/23.
//

#ifndef MODULE_04_WRONGCAT_HPP
#define MODULE_04_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    WrongCat(const WrongCat &src);
    WrongCat & operator=( const WrongCat &rhs );
    virtual ~WrongCat();
    
	void makeSound() const;

};


#endif //MODULE_04_WRONGWrongWrongCat_HPP
