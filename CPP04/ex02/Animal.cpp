/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:07:42 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/25 17:07:44 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Default constructor called! (Animal)" << std::endl;
    this->_type = "Default";
}

Animal::~Animal() {
    std::cout << "Destructor called! (Animal)" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type) {
    std::cout << "Constructor with a type called! (Animal)" << std::endl;
}

const std::string &Animal::getType() const {
    return _type;
}

Animal::Animal(const Animal &A) : _type(A._type){
    std::cout << "Copy constructor called! (Animal)" << std::endl;
}

Animal &Animal::operator=(const Animal &A) {
    std::cout << "Assigned operation called! (Animal)" << std::endl;
    this->_type = A._type;
    return *this;
}

