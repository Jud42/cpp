/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:05:29 by rmamison          #+#    #+#             */
/*   Updated: 2023/07/19 20:10:22 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span(unsigned int N) : _size(N), _array() {
	std::cout << "Constructor is called" << std::endl;
}

Span::Span(const Span & src) {
	*this = src;
}

Span & Span::operator=(const Span & other) {
	if (this != &other) {
		_array = other.getArray();
	}
	return *this;
}

Span::~Span() {
	std::cout << "Destructor is called" << std::endl;
}

void	Span::addNumber(int n) {

	if (this->_array.size() < _size) {
		_array.push_back(n);
	}
	else
		throw std::runtime_error("Error: Span::addNumber limit size");
}



int	&Span::operator[](int index) {
	if (index < 0 || index >= (int)_array.size())
		throw std::runtime_error("Error: Span::operator[] Index invalid");
	return _array[index];
}

//getters
std::vector<int> Span::getArray() const {
	return _array;
}

int	Span::getSize() const {
	return this->_size;
}

//shortest & longest
int	Span::shortestSpan() const {

	if (_array.size() > 1) {

		std::vector<int> tmp(_array);

		std::vector<int>::iterator it = tmp.begin();
		std::vector<int>::iterator it_next;
		std::sort(it, tmp.end());
		int ret = *(it + 1) - *it;
		for (++it; it != tmp.end() - 1; it++) {
			for (it_next = it + 1; it_next != tmp.end(); it_next++)
				if (ret > *it_next - *it)
					ret = *it_next - *it;
		}
		return ret;
	}
	throw std::runtime_error("Error: Span::shortestSpan: no distance can be found");
}

int	Span::longestSpan() const {

	if (_array.size() > 1) {
		
		std::vector<int> tmp(_array);

		std::sort(tmp.begin(), tmp.end());
		int ret = *(tmp.end() - 1) - *(tmp.begin());
		return ret;
	}
	throw std::runtime_error("Error: Span::longestSpan: no distance can be found");
}

//range method
void	Span::addRange(std::vector<int>::iterator first, std::vector<int>::iterator last) {

	while (_array.size() < _size) {
		this->addNumber(*first);
		first++;
		if (first == last)
			return ;
	}		
}
