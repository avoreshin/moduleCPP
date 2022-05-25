/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:39:04 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/24 18:41:52 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "Default constructor called (WrongAnimal)" << std::endl;
    this->_type = "Default";
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type) {
    std::cout << "Constructor with a type called (WrongAnimal)" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destructor called! (WrongAnimal)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) : _type(src._type) {
    std::cout << "Copy constructor called! (WrongAnimal)" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
    std::cout << "Assigned operation called! (WrongAnimal)" << std::endl;
    this->_type = rhs._type;
    return *this;
}

const std::string &WrongAnimal::getType() const {
    return _type;
}

void WrongAnimal::makeSound() {
    std::cout << "Make sound: I'm a WrongAnimal" << std::endl;
}
