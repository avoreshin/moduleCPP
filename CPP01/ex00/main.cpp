/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:17:39 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/13 17:50:04 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void){
	Zombie *zombie = newZombie("Andrey");
	randomChump("Angelina");
	zombie->announce();
	delete(zombie);
	return 0;
}