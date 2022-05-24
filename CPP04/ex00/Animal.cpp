/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:38:08 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/24 18:41:52 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout <<  "Default constructor called (Animal)" << std::endl;
    this->_type = "Default";
}

Animal::~Animal() {
    std::cout << "Destructor called! (Animal)" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type) {
    std::cout <<"Constructor with a type called (Animal)"  << std::endl;
}

const std::string &Animal::getType() const {
    return _type;
}

Animal::Animal(const Animal &src) : _type(src._type){
    std::cout << "Copy constructor called (Animal)" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs) {
    std::cout << "Assigned operation called (Animal)" << std::endl;
    this->_type = rhs._type;
    return *this;
}

void Animal::makeSound() const {
    std::cout << "Make sound..." << std::endl;
}
