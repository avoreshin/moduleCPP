/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:35:10 by jlamonic          #+#    #+#             */
/*   Updated: 2022/06/10 18:24:38 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
void printing(T arr)
{
	for (typename T::iterator i = arr.begin(); i < arr.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
}

int main()
{
	{
		try
		{
			std::vector<int> v1;
			std::vector<int>::iterator v_it;
			int num = 12;
			for (int i = 10; i < 20; ++i)
				v1.push_back(i);
			for (v_it = v1.begin(); v_it != v1.end(); ++v_it)
				std::cout << *v_it << ' ';
			std::cout << "\nsearch = " << num << std::endl;
			v_it = easyfind(v1, num);
			std::cout <<  "easyfind = " << *v_it  << std::endl;
		}
		catch (std::exception &e) {
			std::cerr <<  "Not found" << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			std::list<int> v1;
			std::list<int>::iterator v_it;
			int num = 22;
			for (int i = 10; i < 20; ++i)
				v1.push_back(i);
			for (v_it = v1.begin(); v_it != v1.end(); ++v_it)
				std::cout << *v_it << ' ';
			std::cout << "\nsearch = " << num << std::endl;
			v_it = easyfind(v1, num);
			std::cout << "easyfind = " << *v_it  << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "easyfind = Not found"  << std::endl;
		}
	}
}
