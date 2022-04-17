/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:00:28 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/17 11:37:51 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {

private:
	std::string type;
public:
	Weapon(){};
	Weapon(const std::string string);
	~Weapon(){};
	const std::string getType();
	void setType(const std::string type);
};

#endif