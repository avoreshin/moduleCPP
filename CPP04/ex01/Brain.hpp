/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:06:48 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/25 17:06:51 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain {
private:
    std::string	_ideas[100];
public:
    Brain();
    ~Brain();
    Brain(const Brain &src);
    Brain& operator=(const Brain &rhs);
};


#endif
