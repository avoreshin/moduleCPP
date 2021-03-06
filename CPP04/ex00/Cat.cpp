/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:38:22 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/24 18:41:52 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Default constructor called! (Cat)" << std::endl;
}

Cat::~Cat() {
    std::cout << "Destructor called! (Cat)" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Make sound: I'm a cat!" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
    std::cout << "Assigned operation called! (Cat)" << std::endl;
    this->_type = rhs._type;
    return *this;
}

Cat::Cat(const Cat &src) : Animal(src._type) {
    std::cout << "Copy constructor called! (Cat)" << std::endl;
}
