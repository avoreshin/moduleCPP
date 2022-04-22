#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed {
public:
   	Fixed(void);
	Fixed( Fixed const &fixed );
	Fixed &operator=( Fixed const &fixed );
    ~Fixed(void);
    int getRawBits( void ) const;
    void setRawBits( int const raw );

private:
    int _value;
    static const int _fractionalBits = 8;
};

#endif