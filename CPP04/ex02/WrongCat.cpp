/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:08:37 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/25 17:08:40 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << "Default constructor called! (WrongCat)" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "Destructor called! (WrongCat)" << std::endl;
}

WrongCat::WrongCat(const WrongCat &WC) : WrongAnimal(WC._type) {
    std::cout << "Copy constructor called! (WrongCat)" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &WC) {
    std::cout << "Assigned operation called! (WrongCat)" << std::endl;
    this->_type = WC._type;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "Make sound: I'm a WrongCat" << std::endl;
}
