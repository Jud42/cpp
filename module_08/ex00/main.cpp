<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:28:52 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/28 10:36:05 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int	main() 
{
	std::vector< int > a(2, 5);
	try {
		easyfind(a, 1);
	} catch(std::exception &e) {
		std::cout << e.what() << " value not found" 
			<< std::endl;
	}
	return 0;
=======
#include "easyfind.hpp"
#include <list>
#include <iostream>

int main() {
	
	std::list< int > a;
	
	a.push_back(3);
	a.push_back(6);
	a.push_back(9);
	easyfind(a, 9);
>>>>>>> 58db9f0b099368f055f935243e73863a91d89a41
}
