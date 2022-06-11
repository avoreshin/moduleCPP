/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:41:19 by jlamonic          #+#    #+#             */
/*   Updated: 2022/06/07 11:41:24 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>

void iter(T *arr, int len, void (*func)(T&)){
	for (int i = 0; i < len; ++i){
		func(arr[i]);
	}
}

#endif
