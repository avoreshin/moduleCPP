/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:13:34 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/23 23:13:38 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
};

Fixed::Fixed(const int value){
    std::cout << "Int constructor called" << std::endl;
    this->_value = value << _fractionalBits;
}

Fixed::Fixed(const float value){
    std::cout << "Float constructor called" << std::endl;
    this->_value = (int)(roundf(value * (1 << this->_fractionalBits)));
}


Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed& Fixed::operator=(const Fixed &fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
    _value = fixed.getRawBits();
    return *this;
}

Fixed::~Fixed(void ) {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    return _value;
}

void Fixed::setRawBits(int const raw) {
    _value = raw;
}

float Fixed::toFloat(void) const {
    return static_cast <float>(_value) / (1 << _fractionalBits);
//    return ((float)(this->_value/ (1 << this->_fractionalBits)));
}

int Fixed::toInt(void) const {
    return ((int)(this->_value >> this->_fractionalBits));
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed){
    os << fixed.toFloat();
    return (os);
}
