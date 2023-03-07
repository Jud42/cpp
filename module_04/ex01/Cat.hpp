/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:18:21 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/04 20:30:55 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_CAT_HPP
#define MODULE_04_CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

public:
    Cat();
    Cat(const Cat &src);
    Cat & operator=( const Cat &rhs );
    virtual ~Cat();

    virtual void makeSound() const;

private:
	Brain *_brain;
};


#endif //MODULE_04_CAT_HPP
