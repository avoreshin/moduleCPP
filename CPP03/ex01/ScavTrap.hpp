/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:45:58 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/16 17:46:34 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {

public:

    ScavTrap();
    ScavTrap(const std::string name);
    ~ScavTrap();
    ScavTrap &operator=(const ScavTrap &type);
    ScavTrap(const ScavTrap &type);

    void	attack(const std::string& target);
    void	guardGate(void);

};

#endif //SCAVTRAP_HPP
