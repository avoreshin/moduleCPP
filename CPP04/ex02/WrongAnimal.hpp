/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:08:33 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/25 17:08:35 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal {
protected:
    std::string _type;
public:
    WrongAnimal();
    WrongAnimal(const std::string &type);
    virtual ~WrongAnimal();
    WrongAnimal(const WrongAnimal &WA);
    WrongAnimal& operator=(const WrongAnimal &WA);
    const std::string &getType() const;
    void makeSound() const;
};


#endif
