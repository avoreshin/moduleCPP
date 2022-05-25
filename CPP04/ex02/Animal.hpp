/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:07:47 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/25 17:07:50 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal {
protected:
    Animal(const std::string &type);
    std::string _type;
public:
    Animal();
    virtual ~Animal();
    Animal(const Animal &A);
    Animal &operator=(const Animal &A);
    const std::string &getType() const;
    virtual void    makeSound() const = 0;
    virtual void   	getAddr() const = 0;
};


#endif
