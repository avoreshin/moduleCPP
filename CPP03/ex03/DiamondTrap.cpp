/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:23:45 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/22 17:24:02 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(100, 50, 30, "Noname_Clap"),
                             ScavTrap("Noname_Scav"),
                             FragTrap("Noname_Frag"),
                             _name("Noname_diamond")
{
    std::cout << BLUE << "Default constructor called, Noname created! (DiamondTrap)" << END << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor called, "<< _name << "vanished! (DiamondTrap)" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &type)	:	ClapTrap(type._hitPoint,
                                                             type._energyPoints,
                                                             type._attackDamage,
                                                             type._name),
                                                 ScavTrap(type._name),
                                                 FragTrap(type._name),
                                                 _name(type._name)
{
    std::cout << "Copy constructor called! (DiamondTrap)" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &type)
{
    if (this == &type)
        return (*this);
    _name			= type._name;
    _hitPoint		= type._hitPoint;
    _energyPoints	= type._energyPoints;
    _attackDamage	= type._attackDamage;
    return (*this);
}

DiamondTrap::DiamondTrap(std::string name) :	ClapTrap(100, 50, 30, name + "_clap_name"),
                                             ScavTrap(name),
                                             FragTrap(name),
                                             _name(name)
{
    std::cout << "Constructor with a name called, " << _name << " created! (DiamondTrap)" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << PURPLE << _name << " (DiamondTrap) | " << ClapTrap::_name << " (ClapTrap)" << END << std::endl;
}
