/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:35:15 by jlamonic          #+#    #+#             */
/*   Updated: 2022/06/10 18:22:06 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		std::cout << "Max size: " << sp.getMaxSize() << std::endl;
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Array: " << sp << std::endl;
		std::cout << "shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "longest: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() <<std::endl;
	}
	std::cout << std::endl;
	{
		try
		{
			Span sp = Span(10);
			std::cout << "Max size: " << sp.getMaxSize() << std::endl;
			sp.addNumber(1342);
			sp.addNumber(5243);
			sp.addNumber(3456);
			sp.addNumber(213);
			sp.addNumber(34);
			std::cout << "Array: " << sp << std::endl;
			std::cout << "shortest: " << sp.shortestSpan() << std::endl;
			std::cout << "longest: " << sp.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout  << e.what() <<std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			Span sp = Span(3);
			std::cout << "Max size: " << sp.getMaxSize() << std::endl;
			sp.addNumber(1342);
			sp.addNumber(5243);
			sp.addNumber(3456);
			sp.addNumber(213);
			sp.addNumber(34);
			std::cout << "Array: " << sp << std::endl;
			std::cout << "shortest: " << sp.shortestSpan() << std::endl;
			std::cout << "longest: " << sp.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what()  <<std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			std::vector<int> tmp(10000);
			std::generate(tmp.begin(), tmp.end(), std::rand);
			Span sp = Span(10002);
			sp.addNumber(tmp.begin(), tmp.end());
			std::cout << "Max size: " << sp.getMaxSize() << std::endl;
			std::cout << "Array: " << "sp" << std::endl;
			std::cout << "shortest: " << sp.shortestSpan() << std::endl;
			std::cout << "longest: " << sp.longestSpan() << std::endl << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() <<std::endl;
		}
	}

}