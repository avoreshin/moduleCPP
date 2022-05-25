/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:09:16 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/25 17:09:27 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::~Ice()
{

}

Ice::Ice(const Ice &I) : AMateria(I._type)
{

}

Ice &Ice::operator=(const Ice &I)
{
    if (this == &I)
        return (*this);
    return (*this);
}

AMateria *Ice::clone() const
{
//	AMateria *clone = new Ice(*this);
//	return clone;
    return (new Ice());
}

void Ice::use(ICharacter &target)
{
    std::cout	<<	"* shoots an ice bolt at "	<<	target.getName()
                 <<			" *"				<<	std::endl;
}
