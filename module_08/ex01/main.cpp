<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:46:02 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/28 18:48:15 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
>>>>>>> 58db9f0b099368f055f935243e73863a91d89a41
#include "Span.hpp"

int main()
{
	Span sp = Span(5);
<<<<<<< HEAD
	try {	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp[4] << std::endl;
	sp.shortestSpan();
	} catch (Span::exceptionSize &e) {
		std::cout << e.what() << std::endl;
		exit(1);
	}

	/*std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	*/
=======

	try {
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (Span::exceptionArray &e) {
		std::cout << e.what() << std::endl;
		return (0);
	}
	
	Span rp = Span(10);
	addRange(5, rp);
	for (int i = 0; i < 10; i++)
		std::cout << rp[i] << std::endl;
>>>>>>> 58db9f0b099368f055f935243e73863a91d89a41
	return 0;
}
