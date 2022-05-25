/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:08:49 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/25 17:08:51 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Default")
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &AM) : _type(AM._type)
{
}

AMateria& AMateria::operator=(const AMateria &AM)
{
    if (this == &AM)
        return (*this);
    _type = AM._type;
    return (*this);
}

AMateria::AMateria(std::string const & type) : _type(type)
{
}

std::string const &AMateria::getType() const {
    return _type;
}
