/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:06:37 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/25 17:06:42 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal {
protected:
    std::string _type;
public:
    Animal();
    Animal(const std::string &type);
    Animal(const Animal &src);
    virtual ~Animal();
    Animal &operator=(const Animal &rhs);
    const std::string &getType() const;
    virtual void    makeSound() const;
    void 	    	getAddr() const;
};

#endif
