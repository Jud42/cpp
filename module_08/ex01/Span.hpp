/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:35:49 by rmamison          #+#    #+#             */
/*   Updated: 2023/07/19 20:10:26 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP_
#define _SPAN_HPP_

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

class Span {

	public:
		Span(unsigned int N);
		Span(const Span &src);
		Span &operator=(const Span &other);
		~Span();
		
		//int operator[](int index);

		void addNumber(int n);
		int	shortestSpan() const;
		int longestSpan() const;

		int  &operator[](int index);
		std::vector<int> getArray() const;
		int getSize() const;
		void addRange(std::vector<int>::iterator, std::vector<int>::iterator);

	private:
		unsigned int _size;
		std::vector<int> _array;

};

#endif
