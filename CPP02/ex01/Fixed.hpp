#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
#include <string>

class Fixed {

public:
    Fixed(void);
    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed &fixed);
    ~Fixed(void);
    Fixed &operator=(const Fixed &fixed);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;

private:
    static const int _fractionalBits = 8;
    int _value;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
