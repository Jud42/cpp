/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 11:26:50 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/18 11:26:56 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
