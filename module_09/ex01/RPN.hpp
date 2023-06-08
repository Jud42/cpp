#ifndef _RPN_HPP_
#define _RPN_HPP_

#include <stack>
#include <iostream>
#include <sstream>
#include <cstdlib>

class RPN {
	
	public:
		RPN(std::string str);
		~RPN();

	private:
		std::stack< int > _stk;
};

#endif
