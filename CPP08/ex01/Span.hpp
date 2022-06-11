/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:35:23 by jlamonic          #+#    #+#             */
/*   Updated: 2022/06/10 18:21:08 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
private:
	unsigned int 		_maxSize;
	std::vector<int>	_array;
	Span();
public:
	~Span();
	Span(const Span &S);
	Span& operator=(const Span &S);
	Span(unsigned int size);
	void	addNumber(int n);
	int		shortestSpan();
	int		longestSpan();

	void	addNumber(std::vector<int>::iterator start, std::vector<int>::iterator finish);

	const std::vector<int>	&getArray() const;
	unsigned int			getMaxSize() const;
	friend std::ostream &operator<<(std::ostream &os, const Span &span);
};


#endif
