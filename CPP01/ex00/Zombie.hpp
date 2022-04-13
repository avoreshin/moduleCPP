/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 11:51:53 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/13 12:41:41 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>



class Zombie {
public:
	Zombie(std::string name);
	~Zombie();
	void announce( void );

private:
	std::string 	name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif