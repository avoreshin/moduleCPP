/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:10:49 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/13 17:56:08 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ){

	Zombie *z = new Zombie [N];
	for(int i = 0; N > i;i++){
		z[i].giveName(name);
	}
	return z;
}