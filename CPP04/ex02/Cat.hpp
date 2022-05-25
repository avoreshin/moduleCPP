/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:08:05 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/25 17:08:07 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
private:
    Brain   *_brain;
public:
    Cat();
    virtual ~Cat();
    Cat &operator=(const Cat &C);
    Cat(const Cat &C);

    virtual void makeSound() const;
    virtual void getAddr() const;
};


#endif
