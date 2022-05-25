/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:08:14 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/25 17:08:17 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal {
private:
    Brain *_brain;
public:
    Dog();
    virtual ~Dog();
    Dog &operator=(const Dog &D);
    Dog(const Dog &D);
    virtual void makeSound() const;
    virtual void getAddr() const;
};


#endif
