/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 07:40:28 by rmamison          #+#    #+#             */
/*   Updated: 2023/07/18 15:19:09 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) {

	//int
	std::cout << "******INT******" << std::endl;
	int array[] = {28, 03, 1993};
	iter(array, 3, &printContent< int >);

	//string
	std::cout << "\n******STRING******" << std::endl;
	std::string array1[] = {"TEST", "STRING", "CONTENT"};
	iter(array1, 3, &printContent< std::string >);

	return 0;
}
