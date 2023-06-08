#include "easyfind.hpp"
#include <list>
#include <iostream>

int main() {
	
	std::list< int > a;
	
	a.push_back(3);
	a.push_back(6);
	a.push_back(9);
	easyfind(a, 9);
}
