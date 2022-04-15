/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:00:13 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/15 16:04:07 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
public:
	std::string name;
	Weapon &weapon1;
	void attack();
	HumanA(std::string name, Weapon &weapon1);
	~HumanA(){};
	void setWeapon(Weapon &weapon);
};

#endif