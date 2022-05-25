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

Cat::Cat() : Animal("Cat"), _brain(new Brain()) {
    std::cout << "Default constructor called! (Cat)" << std::endl;
}

Cat::~Cat() {
    std::cout << "Destructor called! (Cat)" << std::endl;
    delete _brain;
}

void Cat::makeSound() const {
    std::cout << "Make sound: I'm a cat!" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
    std::cout << "Assigned operation called! (Cat)" << std::endl;
    this->_type = rhs._type;
    return *this;
}

Cat::Cat(const Cat &src) : Animal(src._type), _brain(new Brain(*src._brain)) {
    std::cout << "Copy constructor called! (Cat)" << std::endl;
}
