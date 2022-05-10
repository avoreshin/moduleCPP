/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:02:10 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/24 09:17:24 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define GRAY "\x1B[90m"
# define END "\033[0m"

#include <iostream>
//#include <string>

class ClapTrap {

public:

    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap &src);
    ~ClapTrap();
    ClapTrap& operator = (ClapTrap const &rhs);

    void attack (const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

private:

    ClapTrap();

    std::string _name;
    unsigned int _hitPoints;
    unsigned int _enemyPoints;
    unsigned int _attackDamage;

};

std::ostream & operator<<(std::ostream &o, ClapTrap const &rhs);

#endif //CLAPTRAP_HPP
