/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:09:07 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/25 17:09:09 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::~Cure()
{

}

Cure::Cure(const Cure &C) : AMateria(C._type)
{

}

Cure &Cure::operator=(const Cure &C)
{
    if (this == &C)
        return (*this);
    return (*this);
}

AMateria* Cure::clone() const
{
//	AMateria *clone = new Cure(*this);
//	return clone;
    return (new Cure());
}

void Cure::use(ICharacter &target)
{
    std::cout	<<	"* heals "		<< target.getName()
                 <<	"'s wounds *"	<< std::endl;
}
