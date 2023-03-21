/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:24:46 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/21 11:12:50 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

uintptr_t	serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	Data *a = new Data(42);

	//value before deserialise
	std::cout << "Val bef: " << a->_i << std::endl;
	Data *b = deserialize(serialize(a));
	//value after deserialise
	std::cout << "Val af: " << b->_i << std::endl;
	std::cout << "Data a: " << a << std::endl;
	std::cout << "Data b: " << b << std::endl;

	return 0;
}
