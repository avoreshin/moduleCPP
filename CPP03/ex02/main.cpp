/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:02:10 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/16 17:46:34 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void) {
    ClapTrap angelina("Angelina");
    angelina.attack("Andrey");
    angelina.takeDamage(10);
    angelina.beRepaired(15);

    ClapTrap andrey("Andrey");
    andrey.attack("Angelina");
    andrey.takeDamage(20);
    andrey.beRepaired(25);

    ScavTrap fanzil("Fansil");
    fanzil.attack("Andrey");
    fanzil.takeDamage(18);
    fanzil.beRepaired(40);
    fanzil.guardGate();

    return (0);
}