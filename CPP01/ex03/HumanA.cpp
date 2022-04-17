/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:00:07 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/17 11:37:51 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon1) : name(name), weapon1(weapon1){
}

void HumanA::attack() {
	std::cout << this->name << " attacks with their "
	<< weapon1.getType() << std::endl;
}
