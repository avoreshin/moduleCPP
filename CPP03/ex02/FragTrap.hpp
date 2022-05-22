/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:56:45 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/22 17:25:20 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:
    FragTrap();
    FragTrap(const FragTrap &type);
    FragTrap& operator=(const FragTrap &type);
    FragTrap(std::string name);
    void highFivesGuys(void);
    ~FragTrap();
};

#endif
