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
}
