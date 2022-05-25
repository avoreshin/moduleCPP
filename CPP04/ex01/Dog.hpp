/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:07:09 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/25 17:07:12 by jlamonic         ###   ########.fr       */
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
    Dog &operator=(const Dog &rhs);
    Dog(const Dog &src);
    virtual void makeSound() const;
};


#endif
