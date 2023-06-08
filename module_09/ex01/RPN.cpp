#include "RPN.hpp"

RPN::RPN(std::string str) {

	std::istringstream	iss(str);
	std::string	tmp;

	while (iss >> tmp)
		_stack.push(tmp);
	if (_stack.size() % 2 == 0)
		std::cout << "error format RPN" << std::endl;
	else {
		
	}
}

RPN::~RPN() {}
