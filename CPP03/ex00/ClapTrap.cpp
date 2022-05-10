/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:02:10 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/24 09:17:24 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    this->_name = "Nobody";
    this->_hitPoints = 10;
    this->_enemyPoints = 10;
    this->_attackDamage = 0;
    std::cout << PURPLE << "Default constructor called" << END << std::endl;
    std::cout << "ClapTrap: <" << this->_name << "> attacks" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << PURPLE <<"Destructor called" << END << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) {
    this->_name = name;
    this->_hitPoints = 10;
    this->_enemyPoints = 10;
    this->_attackDamage = 0;
    std::cout << PURPLE << "Default constructor called"<< END <<std::endl;
    std::cout << ORANGE"ClapTrap: <" << RED << this->_name << ORANGE<< "> attacks" << END << std::endl;
}

void ClapTrap::attack(const std::string &target) {

    if(_enemyPoints > 0) {
        std::cout << GREEN << "Clap <" RED << this->_name << GREEN << "> attack <"
                  << RED << target << GREEN << ">, causing "  << RED<< _attackDamage
                  << GREEN <<" points of damage!" << std::endl;
        this->_enemyPoints--;
    } else {
        std::cout << "Not enough energy point" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {

    if (_hitPoints <= 0) {
        std::cout << RED << _name << " is dead" << END << std::endl;
    } else {
        _hitPoints -= amount;
        if (_hitPoints <= 0) {
            std::cout << _name << " has just died " << std::endl;
        } else {
            std::cout << _name << " has " << _hitPoints
            << "hit point left" << std::endl;
        }
    }

}

void ClapTrap::beRepaired(unsigned int amount) {

    if(_hitPoints <= 0) {
        std::cout << "Unfortunately, " << _name
        << " is already dead" << std::endl;
    }else {
        if (_enemyPoints > 0) {
            this->_hitPoints += amount;
            this->_enemyPoints --;
            std::cout << YELLOW << "ClapTrap: " << this->_name
            << " has " <<_hitPoints << " left" << END << std::endl;
        }else {
            std::cout << "Not enough energy points" << std::endl;
        }
    }
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
    this->_name = rhs._name;
    this->_enemyPoints = rhs._enemyPoints;
    this->_hitPoints = rhs._hitPoints;
    this->_attackDamage = rhs._attackDamage;
    std::cout << "Assignment operator called" << std::endl;
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap &src){
    this->_name = src._name;
    this->_enemyPoints = src._enemyPoints;
    this->_hitPoints = src._hitPoints;
    this->_attackDamage = src._attackDamage;
    std::cout << "Copy constructor called" << std::endl;

}
