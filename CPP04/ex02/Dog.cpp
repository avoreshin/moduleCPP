/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:08:10 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/25 17:08:11 by jlamonic         ###   ########.fr       */
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

Dog &Dog::operator=(const Dog &D) {
    std::cout << "Assigned operation called! (Dog)" << std::endl;
    this->_type = D._type;
    return *this;
}

Dog::Dog(const Dog &D) : Animal(D._type), _brain(new Brain(*D._brain)) {
    std::cout << "Copy constructor called! (Dog)" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Make sound: I'm a Dog" << std::endl;
}

void Dog::getAddr() const
{
    std::cout << this << std::endl;
}
