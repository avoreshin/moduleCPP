#include "Fixed.hpp"


/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
public:
Fixed::Fixed()
{
}

Fixed::Fixed( const Fixed & src )
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
int getRawBits (void) const;
void setRawBits(int const raw);

private:
    static const int kFractoonalBits = 8;
    int value_;

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */