/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:02:10 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/16 17:46:34 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0) {
    std::cout   << "ClapTrap " << name << " object constructor called" << std::endl;
}

ClapTrap::ClapTrap() : name("Feydor"), hit_points(10), energy_points(10), attack_damage(0) {};

ClapTrap::ClapTrap(const std::string name_s, int hit_points_s, int energy_points_s, int attack_damage_s) {
    this->name = name_s;
    this->hit_points = hit_points_s;
    this->energy_points = energy_points_s;
    this->attack_damage = attack_damage_s;
}

ClapTrap::~ClapTrap() {
    std::cout   << "ClapTrap " << name << " object destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string& target) {

    if (energy_points > 0) {
        std::cout   << "ClapTrap " << this->name << " attacks "
                    << target << ", causing " << attack_damage
                    << " points of damage!" << std::endl;
        this->energy_points--;
    } else {
        std::cout << "Not enough energy points" << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (hit_points <= 0) {
        std::cout << name << " is dead :(" << std::endl;
    } else {
        hit_points -= amount;
        if (hit_points <= 0) {
            std::cout << name << " has just died :(" << std::endl;
        } else {
            std::cout	<< name << " has " << hit_points
                         << " hit points left" << std::endl;
        }
    }
}

void    ClapTrap::beRepaired(unsigned int amount) {

    if (hit_points <= 0) {
        std::cout	<< "Unfortunately, " << name
                     << " is already dead!" << std::endl;
    } else {
        if (energy_points > 0) {
            this->hit_points += amount;
            this->energy_points--;
            std::cout	<< "ClapTrap " << this->name
                         << " has " << hit_points << " hit points left :)" << std::endl;
        } else {
            std::cout << "Not enough energy points" << std::endl;
        }
    }
}

ClapTrap &ClapTrap::operator=(const ClapTrap &type) {
    this->name = type.name;
    this->energy_points = type.energy_points;
    this->hit_points = type.hit_points;
    this->attack_damage = type.attack_damage;

    std::cout << "Assignment operator called" << std::endl;
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap	&type) {
    this->name = type.name;
    this->energy_points = type.energy_points;
    this->hit_points = type.hit_points;
    this->attack_damage = type.attack_damage;

    std::cout << "Copy constructor called" << std::endl;
}
