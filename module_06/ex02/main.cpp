/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:03:36 by rmamison          #+#    #+#             */
/*   Updated: 2023/07/18 13:10:19 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>

Base * generate(void) {
	
	int rand = std::rand() % 3;

	if (rand == 0)
		return new A;
	else if (rand == 1)
		return new B;
	else if (rand == 2)
		return new C;
	return nullptr;
}

void identify(Base* p) {

	if (!p)
		return ;
	if (dynamic_cast<A *>(p) != nullptr)
		std::cout << "Type: A" << std::endl;
	else if (dynamic_cast<B *>(p) != nullptr)
		std::cout << "Type: B" << std::endl;
	else if (dynamic_cast<C *>(p) != nullptr)
		std::cout << "Type: C" << std::endl;
	else
		std::cout << "Error: Identity Unknown" << std::endl;
}

void identify(Base &p) {

	static int i = 0;
	try {
		if (i == 0) {
			A &test = dynamic_cast<A &>(p);
			std::cout << "Type: A " << std::endl;
			(void)test;
		}
		else if (i == 1) {
			B &test1 = dynamic_cast<B &>(p);
			std::cout << "Type: B " << std::endl;
			(void)test1;
		}
		else if (i == 2) {
			C &test2 = dynamic_cast<C &>(p);
			std::cout << "Type: C " << std::endl;
			(void)test2;
		}
		i = 0;
	} catch (const std::bad_cast &e) {
		i++;
		if (i > 2)
			std::cout << "Error: Identity Unknown => " << e.what() << std::endl;
		else
			identify(p);
	}
	return ;
}

int	main() 
{
	Base	*ptr = nullptr;

	for (int i = 0; i < 10; i++) {

		ptr = generate();
		if (ptr) {
			std::cout << "\n*---------IDENTITY BY POINTER-------------*";
			std::cout << std::endl;
			identify(ptr);
			std::cout << "\n*---------IDENTITY BY REFERENCE-------------*";
			std::cout << std::endl;
			identify(*ptr);
		}
	}
	if (ptr != nullptr)
		delete ptr;
	return 0;
}
