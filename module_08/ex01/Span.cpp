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
	}
	return *this;
}

Span::~Span() { 
	delete [] _array;
}

void	Span::addNumber(int n) {

	if (_len == _size) {
		throw Span::exceptionSize();
	}
	_array[_len++] = n;
}

int	Span::shortestSpan() const {

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
