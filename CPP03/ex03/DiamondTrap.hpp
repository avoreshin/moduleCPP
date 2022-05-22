/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:24:08 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/22 17:24:22 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap{
private:
    std::string _name;
public:
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &type);
    DiamondTrap& operator = (const DiamondTrap &type);

    void    attack(std::string const &target);
    void    whoAmI(void);
};

#endif//DIAMONDTRAP_HPP
