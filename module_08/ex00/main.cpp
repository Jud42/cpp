/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:28:52 by rmamison          #+#    #+#             */
/*   Updated: 2023/07/19 11:02:08 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int	main() 
{
	std::vector< int > a;
	a.push_back(54);
	a.push_back(5);
	a.push_back(6);
	try {
		
		easyfind(a, 6);
	} catch(std::exception &e) {
		
		std::cout << e.what() << std::endl;
	}
	return 0;
}
