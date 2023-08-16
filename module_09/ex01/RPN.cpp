#include "RPN.hpp"

RPN::RPN(std::string str) {

	std::istringstream	iss(str);
	std::string	word;
	std::string op = "* / + -";
	bool res = false;
	int	resultat;
	
	while (iss >> word) {
		//is not digit
		if (word != "0" && !std::atoi(word.c_str())) {
			//is operator
			if (op.find(word) != std::string::npos && _stk.size() == 2) {
				int operand_2 = _stk.top();
				_stk.pop();
				int operand_1 = _stk.top();
				_stk.pop();
				if (word == "*")
					resultat = operand_1 * operand_2;
				else if (word == "/")
					resultat = operand_1 / operand_2;
				else if (word == "+")
					resultat = operand_1 + operand_2;
				else if (word == "-")
					resultat = operand_1 - operand_2;
				res = true;
				_stk.push(resultat);
			}
			//is not operator & not digit
			else 
				break ;
		}
		else if (_stk.size() < 2)
			_stk.push(std::atoi(word.c_str()));
		else {
			resultat = 0; //temporary => need affirmation
			break ;
		}
	}
	if (res == true)
		std::cout << resultat << std::endl;
	else 
		std::cout << "Error" << std::endl;
}

RPN::~RPN() {}

std::stack<int> RPN::getStk() const { return _stk; }

RPN::RPN() : _stk() {}
RPN::RPN(const RPN &other) { *this = other; }

RPN& RPN::operator=(const RPN &rhs) {

	if (this != &rhs)  
		this->_stk = rhs.getStk();
	return *this;
}
