/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:38:31 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/24 18:41:52 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
private:
    Brain * _brain;
public:
    Cat();
    virtual ~Cat();
    Cat &operator=(const Cat &rhs);
    Cat(const Cat &src);

    virtual void makeSound() const;
};


#endif
