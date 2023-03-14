/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:07:46 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/10 14:08:38 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
