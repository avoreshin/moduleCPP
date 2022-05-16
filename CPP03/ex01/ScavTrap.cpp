/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:45:46 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/16 17:46:34 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name, 100, 50, 20) {
    std::cout << "Calling ScavTrap " << name << " object constructor" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Calling ScavTrap " << name << " object destructor" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
    std::cout	<< "ScavTrap " << name  << " attacks " << target
                 << " causing " << attack_damage << " points of damage" << std::endl;
}

void	ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &type) {
    this->name = type.name;
    this->energy_points = type.energy_points;
    this->hit_points = type.hit_points;
    this->attack_damage = type.attack_damage;

    std::cout << "Assignment operator called" << std::endl;
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap &type) : ClapTrap(type.name, type.hit_points, type.energy_points, type.attack_damage){

    std::cout << "ScavTrap copy constructor called" << std::endl;
}