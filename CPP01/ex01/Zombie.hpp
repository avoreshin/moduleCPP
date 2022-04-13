/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:40:24 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/13 17:46:56 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie{
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce (void);
	void giveName (std::string name);
private:
	std::string name;
};

Zombie*    zombieHorde( int N, std::string name );
