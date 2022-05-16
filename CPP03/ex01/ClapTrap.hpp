/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:02:10 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/16 17:46:34 by jlamonic         ###   ########.fr       */
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

#include <iostream>

class ClapTrap
{

    public:

        ClapTrap();

        ClapTrap(const std::string name);
        ClapTrap &operator=(const ClapTrap &type);
        ClapTrap(const ClapTrap &type);
        ~ClapTrap();

    void	attack(const std::string& target);
    void	takeDamage(unsigned int amount);
    void	beRepaired(unsigned int amount);

    protected:
        std::string name;
        int			hit_points;
        int			energy_points;
        int			attack_damage;
    ClapTrap(const std::string name_s, int hit_points_s, int energy_points_s, int attack_damage_s);

};

#endif /* ******************************************************** CLAPTRAP_H */
