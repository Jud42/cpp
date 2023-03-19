/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:18:51 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/09 12:44:23 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _FIXED_HPP
#define _FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {

	public:
    	Fixed();
        Fixed(Fixed const & src);
        Fixed &operator=( Fixed const & rhs );
    	~Fixed();

        int getRawBits() const;
        void setRawBits(int const raw);

	private:

    	int _value;
    	static const int _bits_fractional;
};

#endif //_FIXED_HPP
