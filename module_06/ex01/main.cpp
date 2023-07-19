/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:24:46 by rmamison          #+#    #+#             */
/*   Updated: 2023/07/18 12:06:10 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main()
{
	Data a;
	a.i = 1;

	
	std::cout << "Address: " << &a << " => Val: "<< a.i << std::endl;
	uintptr_t val_serial = Serializer::serialize(&a);
	//value before deserialise
	Data *val_deserial = Serializer::deserialize(val_serial);
	//value after deserialise
	std::cout << "After deserialize" << std::endl;
	std::cout << "Address: " << val_deserial << " => Val: "<< val_deserial->i << std::endl;

	return 0;
}
