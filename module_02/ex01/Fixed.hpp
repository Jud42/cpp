//
// Created by Raphael Mamison on 2/21/23.
//

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

        void setRawBits(int const raw);
        int getRawBits() const;
        float toFloat(void) const;
        int toInt(void) const;

private:

    int32_t _value;
    static const int _bits_fractional;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif //_FIXED_HPP
