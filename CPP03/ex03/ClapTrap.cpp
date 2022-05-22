/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:40:28 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/16 17:46:34 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap() : _name("NoName"),
                       _hitPoint(10),
                       _energyPoints(10),
                       _attackDamage(0)
{
}

ClapTrap::ClapTrap(const std::string name) : _name(name),
                                             _hitPoint(10),
                                             _energyPoints(10),
                                             _attackDamage(0)
{
    std::cout	<<	"Constructor with a name called, "
              << PURPLE
              << _name
              << END
              << " created! (ClapTrap)" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src ): _name(src._name),
                                          _hitPoint(src._hitPoint),
                                          _energyPoints(src._energyPoints),
                                          _attackDamage(src._attackDamage)
{
    std::cout << "Copy constructor called! (ClapTrap)" << std::endl;
}

ClapTrap::ClapTrap(int _HitPoints,
                   int _EnergyPoints,
                   int _AttackDamage,
                   std::string _Name) : _name(_Name),
                                        _hitPoint(_HitPoints),
                                        _energyPoints(_EnergyPoints),
                                        _attackDamage(_AttackDamage)
{
    std::cout << BLUE <<  "Protected constructor called, " << _name << " created! (ClapTrap)" << END << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
    std::cout << PURPLE <<"Destructor called " << _name << END <<" (ClapTrap)"<< std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=(const ClapTrap & rhs )
{
	if (this == &rhs )
        return (*this);
	_name = rhs._name;
    _hitPoint = rhs._hitPoint;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
	return (*this);
}
/*
** --------------------------------- METHODS ----------------------------------
*/

const std::string &ClapTrap::getName() const {
    return _name;
}

int ClapTrap::getHitPoints() const {
    return _hitPoint;
}

int ClapTrap::getEnergyPoints() const {
    return _energyPoints;
}

int ClapTrap::getAttackDamage() const {
    return _attackDamage;
}

void ClapTrap::attack(const std::string &target) {
    if (_hitPoint <= 0 || _energyPoints <= 0)
    {
        std::cout   << "ClapTrap " << GREEN
                  << _name << END
                  << " has no energy or points to attack!"
                  << "And now he is dead." << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << GREEN
                  << _name
                  << END
                  << " attack "
                  << target
                  << ", causing "
                  << _attackDamage
                  << " points of damage!" << std::endl;
        _energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoint <= 0)
    {
        std::cout	<< "ClapTrap "
                  << GREEN
                  << _name
                  << END
                  << " is already dead!"
                  << std::endl;
        return;
    }
    _hitPoint -= amount;
    if (_hitPoint <= 0)
    {
        std::cout   << "ClapTrap "
                  << GREEN
                  << _name
                  << END
                  << " damage by "
                  << amount
                  << " points!"
                  << " And now he is dead." << std::endl;
    }
    else {
        std::cout << "ClapTrap "
                  << GREEN
                  << _name
                  << END
                  << " damaged by "
                  << amount
                  << " points!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_hitPoint <= 0 || _energyPoints <= 0)
    {
        std::cout	<<	"ClapTrap "
                  << GREEN
                  <<	_name
                  << END
                  <<	" is dead! No repaires done."
                  <<	std::endl;
        return;
    }
    std::cout		<<	"ClapTrap "
              << GREEN
              <<	_name
              << END
              <<	" repaired by "
              <<	amount
              <<	" points!"
              <<	std::endl;
    _hitPoint += amount;
    _energyPoints--;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */