/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:54:37 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/10 12:06:40 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {

//    Animal a;
//    Cat b;
//    Dog c;
//
//    std::cout << c.getType() << " say Hello" << std::endl;
//    std::cout << b.getType() << " is an animal" << std::endl;
//    std::cout << a.getType() << " is an animal" << std::endl;
//    a.makeSound();
//    b.makeSound();
//    c.makeSound();

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Dog a;
    const WrongAnimal *wrongA = new WrongCat();

    std::cout << "------GetType-------" << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " \n" << std::endl;

    std::cout << "-------MakeSound-------" << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    a.makeSound();

    std::cout << "\n-------Wrong--MakeSound-------" << std::endl;
    wrongA->makeSound();

	//destructeur depend de l'ordre de delete sur la pile
	delete wrongA;
	delete j;
	delete i;
	delete meta;

    return 0;
}
