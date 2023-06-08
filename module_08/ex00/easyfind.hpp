#ifndef _EASYFIND_HPP_
#define _EASYFIND_HPP_

#include <list>
#include <iostream>
#include <algorithm>

template< typename T >
void easyfind(T data, int digit)
{
	int *it1 = std::find(data.begin(), 
	data.end(), digit);
	if (it1 != data.end())
		std::cout << "FIND: " << *it1 << std::endl;
}

#endif
