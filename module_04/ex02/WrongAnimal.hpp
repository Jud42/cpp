/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:07:39 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/10 14:13:22 by rmamison         ###   ########.fr       */
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

    std::string _type;
};


#endif //MODULE_04_WRONGWrongAnimal_HPP
