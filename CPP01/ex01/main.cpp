/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:38:19 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/13 17:52:49 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	Zombie *z =  zombieHorde( 3, "Fanzil" );
	for (int i = 0; i < 3; i++)
		z->announce();
	delete []z;
	return 0;
}