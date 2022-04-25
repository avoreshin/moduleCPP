/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:01:15 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/25 18:01:19 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bsp.hpp"
#include "Fixed.hpp"

namespace bsp {

	static Fixed crossP(Point const &u, Point const &v) {
		return u.getX() * v.getY() - v.getX() * u.getY();
	}
	
	bool bsp(Point const a, Point const b, Point const c, Point const point){
	Fixed den = crossP(b - a,c - a);
	if (den == 0) {
		return (false);
	}
	Fixed m = (crossP(point - a, c - a) / den);
	Fixed n = -(crossP(point - a, b - a) / den);
		return (m > 0 && m < 1 && n > 0 && n < 1 && m + n < 1);
	}
}
