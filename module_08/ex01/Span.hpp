#ifndef _SPAN_HPP_
#define _SPAN_HPP_

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

class Span {

	public:
		Span(unsigned int);
		Span(const Span & src);
		Span & operator=(const Span & other);
		~Span();
		
		int  &operator[](int index);
		int *getArray() const;
		int getSize() const;
		void addNumber(int n);
		int shortestSpan() const;
		int longestSpan() const;
		void rangeAdd(int index);

		class exceptionArray : public std::exception {
			public:
				exceptionArray(const char *msg);
				const char *what() const throw();
			private:
				const char *_msg;
		};

	private:
		unsigned int _size;
		int _count;
		int *_array;
};

void addRange(int value, Span &span);

#endif
