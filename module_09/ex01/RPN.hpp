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

		std::stack<int> getStk() const;

	private:
		RPN();
		RPN(const RPN &other);
		RPN& operator=(const RPN &rhs);

		std::stack< int > _stk;
};

#endif
