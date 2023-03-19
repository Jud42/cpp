/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 11:27:15 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/18 11:27:24 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
