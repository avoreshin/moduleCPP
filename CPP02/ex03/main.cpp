/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:01:38 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/25 18:01:42 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Point.hpp"
#include "Bsp.hpp"

int main (void)
{
	std::cout.setf(std::ios::boolalpha);
	std::cout << bsp::bsp(Point(0.0f, 0.0f), Point(0.0f, 10.0f), Point(100.0f, 0.0f),
						  Point(25.0f, 25.0f))
			  << std::endl; // false
	std::cout << bsp::bsp(Point(0.0f, 0.0f), Point(0.0f, 1.0f), Point(1.0f, 0.0f),
						  Point(0.0f, 0.0f))
			  << std::endl; // false
	std::cout << bsp::bsp(Point(0.0f, 0.0f), Point(0.0f, 1.0f), Point(1.0f, 0.0f),
						  Point(0.4f, 0.4f))
			  << std::endl; // true
	std::cout << bsp::bsp(Point(0.0f, 0.0f), Point(0.0f, 2.0f), Point(2.0f, 0.0f),
						  Point(0.5f, 0.5f))
			  << std::endl; // true
	std::cout << bsp::bsp(Point(0.0f, 0.0f), Point(0.0f, 2.0f), Point(2.0f, 0.0f),
						  Point(1.0f, 1.0f))
			  << std::endl; // false
	return 0;
}


