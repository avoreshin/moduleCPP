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

ScavTrap::ScavTrap() : ClapTrap(100, 50, 20)
{
    std::cout << "Default constructor called, RandomScavTrap created! (ScavTrap)" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor called, \033[31m" << _name << "\033[0m vanished! (ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 50, 20, name) {
    std::cout	<<	"Constructor with a name called, \033[32m"
              <<	_name
              <<	"\033[0m created! (ScavTrap)" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    std::cout	<<	"ScavTrap \033[32m"
              <<	_name
              <<	"\033[0m attack "
              <<	target
              << ", causing "
              <<	_attackDamage
              <<	" points of damage!" << std::endl;
    //ClapTrap::attack(target);
}

void ScavTrap::guardGate() {
    std::cout	<<	"ScavTrap \033[32m"
              <<	_name
              <<	"\033[0m have entered the Gate keeper mode!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &type) {
    if (&type == this)
        return (*this);
    _name = type._name;
    _hitPoint = type._hitPoint;
    _energyPoints = type._energyPoints;
    _attackDamage = type._attackDamage;
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &type) : ClapTrap(type._hitPoint,
                                                    type._energyPoints,
                                                    type._attackDamage,
                                                    type._name) {
    std::cout << "Copy constructor called! (ScavTrap)" << std::endl;
}
