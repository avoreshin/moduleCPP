/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:00:25 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/15 16:01:18 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

const std::string Weapon::getType(){
	return type;
}

Weapon::Weapon(std::string type){
	this->type = type;
}

void Weapon::setType(std::string type){
	this->type = type;
}