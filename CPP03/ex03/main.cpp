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
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main (void) {
    std::cout << BLUE
              <<"__________________________________________________________________" << std::endl;
    std::cout << "_______________________________ClapTrap___________________________" << std::endl;
    std::cout << "__________________________________________________________________"
              << END
              << std::endl;

    ClapTrap angelina("Angelina");
    angelina.attack("Andrey");
    angelina.takeDamage(10);
    angelina.beRepaired(15);
    std::cout << "__________________________________________________________________" << std::endl;
    ClapTrap andrey("Andrey");
    andrey.attack("Angelina");
    andrey.takeDamage(20);
    andrey.beRepaired(25);

    std::cout << BLUE
            <<"__________________________________________________________________" << std::endl;
    std::cout << "_____________________________ScavTrap_____________________________" << std::endl;
    std::cout << "__________________________________________________________________"
              << END
              << std::endl;

    ScavTrap fanzil("Fansil");
    fanzil.attack("Andrey");
    fanzil.takeDamage(18);
    fanzil.beRepaired(40);
    fanzil.guardGate();

    std::cout << BLUE
              <<"__________________________________________________________________" << std::endl;
    std::cout << "_____________________________FragTrap_____________________________" << std::endl;
    std::cout << "__________________________________________________________________"
              << END
              << std::endl;

    FragTrap denis("Denis");
    denis.attack("Andrey");
    denis.takeDamage(18);
    denis.beRepaired(40);
    denis.highFivesGuys();
    std::cout << "__________________________________________________________________" << std::endl;
    FragTrap misha = denis;
    misha.attack("Denis");
    misha.takeDamage(1);
    misha.beRepaired(1024);
    misha.highFivesGuys();

    std::cout << BLUE
              <<"__________________________________________________________________" << std::endl;
    std::cout << "_____________________________DiamondTrap__________________________" << std::endl;
    std::cout << "__________________________________________________________________"
              << END
              << std::endl;
    DiamondTrap taras ("Taras");
    taras.whoAmI();
    std::cout << GRAY
              <<"__________________________________________________________________" << std::endl;
    std::cout << "_________________________destructor_______________________________" << std::endl;
    std::cout << "__________________________________________________________________"
              << END
              << std::endl;

    return (0);
}
