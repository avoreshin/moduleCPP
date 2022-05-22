/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:56:35 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/22 16:56:41 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():	ClapTrap(100, 100, 30)
{
    std::cout << GREEN <<"Default constructor called, Noname created! (FragTrap)"<< END << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called, " << _name << " vanished! (FragTrap)" << std::endl;
}

FragTrap::FragTrap(const FragTrap &type) : ClapTrap(type._hitPoint, type._energyPoints, type._attackDamage, type._name)
{
    std::cout << "Copy constructor called! (FragTrap)" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &type)
{
    if (this == &type)
        return (*this);
    _name = type._name;
    _hitPoint = type._hitPoint;
    _energyPoints = _energyPoints;
    _attackDamage = type._attackDamage;
    return (*this);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor with a name called, " << PURPLE << _name << END << " created! (FragTrap)" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Guys HIGH FIVES TIME!" << std::endl;
}
