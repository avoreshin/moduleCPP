/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:07:53 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/25 11:00:21 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <math.h>

Fixed::Fixed(void): _value(0) {
//	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const int value){
//	std::cout << "Int constructor called" << std::endl;
	this->_value = value << _fractionalBits;
}

Fixed::Fixed(const float value)
:_value(roundf(value * (1 << _fractionalBits)))
{
//	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
//	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed &fixed) {
//	std::cout << "Copy assignment operator called" << std::endl;
	_value = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed(void) {
//	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	return _value;
}

void Fixed::setRawBits(int const raw) {
	_value = raw;
}

float Fixed::toFloat(void) const {
	return static_cast <float>(_value) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
	return ((int)(this->_value >> this->_fractionalBits));
}

std::ostream &operator << (std::ostream &os, const Fixed &fixed){
	os << fixed.toFloat();
	return (os);
}
Fixed Fixed::operator+(const Fixed &fixed) const{
	return Fixed(toFloat()+fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const{
	Fixed f;
	f.setRawBits(_value - fixed._value);
	return f;
}

Fixed Fixed::operator-(void) {
	Fixed fixed;

	fixed.setRawBits(-_value);
	return fixed;
}
Fixed Fixed::operator*(const Fixed &fixed) const{
	return Fixed(toFloat()*fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const{
	return Fixed(toFloat()/fixed.toFloat());
}

Fixed &Fixed::operator++(void){
	++_value;
	return *this;
}

Fixed &Fixed::operator--(void){
	--_value;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed temp(*this);
	++_value;
	return temp;
}

Fixed Fixed::operator--(int){
	Fixed temp(*this);
	--_value;
	return temp;
}

bool Fixed::operator==(const Fixed &fixed) const {
	return _value == fixed.getRawBits();
}
bool Fixed::operator>(const Fixed &fixed) const {
	return _value > fixed.getRawBits();
}
bool Fixed::operator<(const Fixed &fixed) const {
	return _value < fixed.getRawBits();
}
bool Fixed::operator>=(const Fixed &fixed) const {
	return _value >= fixed.getRawBits();
}
bool Fixed::operator<=(const Fixed &fixed) const {
	return _value <= fixed.getRawBits();
}
bool Fixed::operator!=(const Fixed &fixed) const{
	return _value != fixed.getRawBits();
}

const Fixed &Fixed::max(Fixed &f1, Fixed &f2) {
	return f1 > f2 ? f1: f2;
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2) {
	return f1 > f2 ? f1: f2;
}

const Fixed &Fixed::min(Fixed &f1, Fixed &f2) {
	return f1 < f2 ? f1 : f2;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2) {
	return f1 < f2 ? f1 : f2;
}
