/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:07:05 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/25 17:07:07 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain()) {
    std::cout << "Default constructor called! (Dog)" << std::endl;
}

Dog::~Dog() {
    std::cout << "Destructor called! (Dog)" << std::endl;
    delete _brain;
}

Dog &Dog::operator=(const Dog &rhs) {
    std::cout << "Assigned operation called! (Dog)" << std::endl;
    this->_type = rhs._type;
    return *this;
}

Dog::Dog(const Dog &src) : Animal(src._type), _brain(new Brain(*src._brain)) {
    std::cout << "Copy constructor called! (Dog)" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Make sound: I'm a Dog" << std::endl;
}
