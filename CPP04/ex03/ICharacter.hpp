/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:09:38 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/25 17:09:40 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
public:
    virtual			~ICharacter() {}
    virtual			std::string const & getName() const = 0;
    virtual void	equip(AMateria* m) = 0;
    virtual void	unequip(int idx) = 0;
    virtual void	use(int idx, ICharacter& target) = 0;
};


#endif
