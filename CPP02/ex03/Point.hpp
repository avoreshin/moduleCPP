/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:01:51 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/25 18:01:58 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "iostream"
#include "Fixed.hpp"

class Point {
public:
	Point(void);
	Point(Fixed const &x, Fixed const &y);
	Point(Point const &point);
	~Point(void);

	Point &operator=(Point const &point);
	bool operator==(Point const &point);

	Point operator-(const Point &point) const;

	Fixed const &getX(void) const;
	Fixed const &getY(void) const;
	void setX(const Fixed &fixed);
	void setY(const Fixed &fixed);

private:
	Fixed const _x;
	Fixed const _y;
};


#endif
