/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:38:36 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/24 18:41:52 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Default constructor called! (Dog)" << std::endl;
}

Dog::~Dog() {
    std::cout << "Destructor called! (Dog)" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
    std::cout << "Assigned operation called! (Dog)" << std::endl;
    this->_type = rhs._type;
    return *this;
}

Dog::Dog(const Dog &src) : Animal(src._type) {
    std::cout << "Copy constructor called! (Dog)" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Make sound: I'm a Dog" << std::endl;
}