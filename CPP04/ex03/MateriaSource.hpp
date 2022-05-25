/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:10:02 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/25 17:20:44 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *_materias[4];
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource &M);
    MateriaSource& operator=(const MateriaSource &M);
    virtual void learnMateria(AMateria* a);
    virtual AMateria* createMateria(std::string const & type);
};

#endif