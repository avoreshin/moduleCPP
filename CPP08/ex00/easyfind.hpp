/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:35:05 by jlamonic          #+#    #+#             */
/*   Updated: 2022/06/10 18:20:49 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

template<typename T>
typename T::iterator easyfind(T &container, int num)
{
	typename T::iterator ret;
	ret = std::find(container.begin(), container.end(), num);
	if (ret != container.end())
		return ret;
	throw std::exception();
}