#include "Span.hpp"

Span::Span(unsigned int N) : _size(N), _count(0), _array(new int[N]) {
	std::cout << "Constructor is called" << std::endl;
}

Span::~Span() {
	if (_array)
		delete [] _array;
	std::cout << "Destructor is called" << std::endl;
}

Span::Span(const Span & src) {
	*this = src;
}

Span & Span::operator=(const Span & other) {
	if (this != &other) {
		delete [] _array;
		_array = other.getArray();
	}
	return *this;
}

int	&Span::operator[](int index) {
	if (index >= _count)
		throw exceptionArray("std::exceptionArray: error index");
	return _array[index];
}

int * Span::getArray() const {
	return this->_array;
}

int	Span::getSize() const {
	return this->_size;
}

void	Span::addNumber(int n) {

	if (_count < (int)_size) {
		_array[_count] = n;
		_count++;
	}
	else
		throw Span::exceptionArray("std::exceptionArray: limit size");
}

int	Span::shortestSpan() const {

	if (_count > 0) {
		int ret = std::max(_array[0], _array[1]) - 
			std::min(_array[0], _array[1]);
		for (int i = 2; i < _count; i++) {
			ret = std::min(ret, std::max(_array[i], _array[i -1]) 				- std::min(_array[i], _array[i - 1]));
		}
		return ret;
	}
	throw Span::exceptionArray("std::exceptionArray: no content");
	return 1;
}

int	Span::longestSpan() const {

	if (_count > 0) {
		int ret = std::max(_array[0], _array[1]) - 
			std::min(_array[0], _array[1]);
		for (int i = 2; i < _count; i++) {
			ret = std::max(ret, std::max(_array[i], _array[i -1]) 				- std::min(_array[i], _array[i - 1]));
		}
		return ret;
	}
	throw Span::exceptionArray("std::exceptionArray: no content");
	return 1;
}

Span::exceptionArray::exceptionArray(const char *msg) : _msg(msg) {}

const char *Span::exceptionArray::what() const throw() {
	return _msg;
}

void	addRange(int value, Span &span) {

	(void) value;	
	for (int i = 0; i < span.getSize(); i++) {
		span.addNumber(value);
	}
	return ;
}


