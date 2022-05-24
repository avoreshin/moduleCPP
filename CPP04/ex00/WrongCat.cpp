/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:39:19 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/24 18:41:52 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << "Default constructor called! (WrongCat)" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "Destructor called! (WrongCat)" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src._type) {
    std::cout << "Copy constructor called! (WrongCat)" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
    std::cout << "Assigned operation called! (WrongCat)" << std::endl;
    this->_type = rhs._type;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "Make sound: I'm a WrongCat" << std::endl;
}
