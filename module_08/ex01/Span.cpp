<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:05:29 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/28 19:14:06 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span(unsigned int N) : _size(N), _array(new int[N]), _len(0) {}

Span::Span(const Span &src) {
	*this = src;
} 

Span & Span::operator=(const Span &other) {
	
	if (this != &other) {
		delete [] this->_array;
		this->_array = other._array;
=======
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
>>>>>>> 58db9f0b099368f055f935243e73863a91d89a41
	}
	return *this;
}

<<<<<<< HEAD
Span::~Span() { 
	delete [] _array;
=======
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
>>>>>>> 58db9f0b099368f055f935243e73863a91d89a41
}

void	Span::addNumber(int n) {

<<<<<<< HEAD
	if (_len == _size) {
		throw Span::exceptionSize();
	}
	_array[_len++] = n;
=======
	if (_count < (int)_size) {
		_array[_count] = n;
		_count++;
	}
	else
		throw Span::exceptionArray("std::exceptionArray: limit size");
>>>>>>> 58db9f0b099368f055f935243e73863a91d89a41
}

int	Span::shortestSpan() const {

<<<<<<< HEAD
	int *tmp = _array;

	std::sort(tmp, tmp + _size);

	for (int i = 0; i < _len; i++) {
		std::cout << tmp[i] << std::endl;	
		std::cout << _array[i] << std::endl;	
	}
	return 0;
}

int Span::operator[](int index) {

	return	_array[index];
}

const char * Span::exceptionSize::what() const throw() {
	
	return "Span::exceptionSize";
}
=======
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


>>>>>>> 58db9f0b099368f055f935243e73863a91d89a41
