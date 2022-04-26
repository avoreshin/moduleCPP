/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:01:47 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/26 18:01:49 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0){
}

Point::Point(const Point &point) {
	*this = point;
}

Point::Point(Fixed const &x,  Fixed const &y) : _x(x),_y(y) {};

Point &Point::operator=(Point const &point) {
	(Fixed) this->_x = (Fixed)point._x;
	(Fixed) this->_y = (Fixed)point._y;
	return (*this);
}

Point Point::operator-(Point const &point) const {
	Point p;
	p.setX(this->_x - point._x);
	p.setY(this->_y - point._y);
	return p;
}

Fixed const &Point::getX() const {
	return this->_x;
}

Fixed const &Point::getY() const {
	return this->_y;
}

void Point::setX(const Fixed &fixed) {
	const_cast <Fixed &>(this->_x) = fixed.getRawBits();
}

void Point::setY(const Fixed &fixed) {
	const_cast <Fixed &>(this->_y) = fixed.getRawBits();
}

bool Point::operator==(const Point &point) {
	if ((Fixed)this->_x == point._x && (Fixed)this->_y == point._y)
		return true;
	return false;
}

Point::~Point(void) {};