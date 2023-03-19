/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:46:50 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/18 10:49:09 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP_
#define _ANIMAL_HPP_

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

    	std::string _type;
};

#endif //MODULE_04_ANIMAL_HPP
