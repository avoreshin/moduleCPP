/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:02:10 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/24 09:17:24 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void) {
    ClapTrap angelina("Angelina");
    ClapTrap andrey("Andrey");
    ClapTrap fanzil = andrey;

    angelina.beRepaired(10);
    andrey.attack("Angelina");
    angelina.takeDamage(0);
    andrey.beRepaired(10);
    angelina.attack("Andrey");
    andrey.takeDamage(0);
    fanzil = andrey;
;
    return (0);
}