/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:00:16 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/15 16:03:38 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon2 = &weapon;
}

void HumanB::attack() {
	std::cout << this->name << " attacks with their " << weapon2->getType()
	<< std::endl;
}

HumanB::HumanB(std::string name) {
	this->name = name;
}

HumanB::~HumanB() {

}

