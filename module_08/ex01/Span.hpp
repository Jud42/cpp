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

#ifndef _SPAN_HPP_
#define _SPAN_HPP_

#include <iostream>
#include <list>

class Span {

	public:
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

#endif
