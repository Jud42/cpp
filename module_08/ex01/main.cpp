/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:46:02 by rmamison          #+#    #+#             */
/*   Updated: 2023/07/19 20:10:29 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{

	try {
	
		//test provide subject	
		Span sp(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		//my own test
		/*Span sp = Span(10);
		int size = sp.getSize();
		for (int i = 0; i < size; i++)
			sp.addNumber(std::rand() % (size * 10 + 1));
		*/
		
		int size = sp.getSize();
		for (int i = 0; i < size; i++)
			std::cout << sp[i] << std::endl;


		Span copy_range(4);
		size = copy_range.getSize();
		copy_range.addRange((sp.getArray()).begin(), (sp.getArray()).end() - 1);
		std::cout << "-----RANGE METHOD------" << std::endl;
		for (int i = 0; i < size; i++)
			std::cout << copy_range[i] << std::endl;


		std::cout << "shortestSpan:\t" << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan:\t" << sp.longestSpan() << std::endl;

	
	} catch (std::exception &e) { 
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
