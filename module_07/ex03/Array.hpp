/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:46:28 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/24 19:18:27 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_

template< typename T >
class Array {

	public:
		Array< T >() : _arraysize(), _array(nullptr) {}
		
		Array< T >(unsigned int n) : _arraysize(n), _array(new T[n]()) {}
		
		Array< T >(Array< T > const & src) {
			*this = src;
		}

		Array< T > & operator=(Array< T > const & other) {
			if (this != &other) {
				this->_arraysize = other._arraysize;
				this->_array = new T[this->_arraysize];
				for (unsigned int i = 0; i < this->_arraysize; i++)
					this->_array[i] = other._array[i];
			}
			return *this;
		}

		T & operator[](int index) {
			if (index < 0 || index >= (int)this->_arraysize) {
				throw std::exception();
			}
			return _array[index];
		}

		~Array< T >() {
			if (this->_array != nullptr)
				delete[] this->_array;
		}
		unsigned int size() const {
			return _arraysize;
		}

		/*class indexception : public std::exception {
			public:
				virtual const char* what() const {
        			return "std::indexeption: bad index";
    			}
		}*/

	private:
		unsigned int _arraysize;
		T *_array;

};

#endif
