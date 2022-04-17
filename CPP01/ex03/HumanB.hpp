/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:00:20 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/17 11:37:51 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
public:
	std::string name;
	Weapon *weapon2;
	void attack();
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon &weapon);
};

#endif