/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:27:38 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/04 22:48:09 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	/*
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	*/
	Animal *animal[10];

	for (int i = 0; i < 10; i++) {
		if (i < 5)
			animal[i] = new Cat;
		else
			animal[i] = new Dog;
	}
	std::cout << "\n----------------\n" << std::endl;	
	for (int i = 0; i < 10; i++)
		animal[i]->makeSound();
	std::cout << "\n----------------\n" << std::endl;	

	for (int i = 0; i < 10; i++)
		delete animal[i];

	return 0;
}
