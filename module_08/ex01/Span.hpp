<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:35:49 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/28 18:47:12 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
>>>>>>> 58db9f0b099368f055f935243e73863a91d89a41
#ifndef _SPAN_HPP_
#define _SPAN_HPP_

#include <iostream>
<<<<<<< HEAD
#include <list>
=======
#include <algorithm>
#include <vector>
#include <cstdlib>
>>>>>>> 58db9f0b099368f055f935243e73863a91d89a41

class Span {

	public:
<<<<<<< HEAD
		Span(unsigned int N);
		Span(const Span &src);
		Span &operator=(const Span &other);
		~Span();
		
		void addNumber(int n);
		int	shortestSpan() const;
		//int	longestSpan() const;

		int operator[](int index);

		class exceptionSize : std::exception {
			public:
				const char * what() const throw();
		};

	private:
		int	_size;
		int *_array;	
		int	_len;

};

=======
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

>>>>>>> 58db9f0b099368f055f935243e73863a91d89a41
#endif
