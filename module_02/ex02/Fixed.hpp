/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:15:57 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/09 13:19:06 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP
#define _FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {

	public:
		Fixed();
		Fixed(int const i);
		Fixed(float const f);
		Fixed(Fixed const & src);
		Fixed &operator=( Fixed const & rhs );
		~Fixed();

		bool operator<( Fixed const & rhs ) const;
		bool operator>( Fixed const & rhs ) const;
		bool operator<=( Fixed const & rhs ) const;
		bool operator>=( Fixed const & rhs ) const;
		bool operator==( Fixed const & rhs ) const;
		bool operator!=( Fixed const & rhs ) const;

		Fixed operator+( Fixed const & rhs );
		Fixed operator-( Fixed const & rhs );
		Fixed operator*( Fixed const & rhs );
		Fixed operator/( Fixed const & rhs );

		Fixed &operator++();
		Fixed &operator--();

		Fixed operator++(int);
		Fixed operator--(int);

		void setRawBits(int const raw);
		int getRawBits() const;
		float toFloat(void) const;
		int toInt(void) const;

		static Fixed min(Fixed &a, Fixed &b);
		static Fixed min(const Fixed &a, const Fixed &b);
		static Fixed max(Fixed &a, Fixed &b);
		static Fixed max(const Fixed &a, const Fixed &b);

	private:
		int _value;
		static const int _bits_fractional;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif //_FIXED_HPP
