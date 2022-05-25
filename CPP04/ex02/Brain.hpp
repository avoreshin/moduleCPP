/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:07:57 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/25 17:07:58 by jlamonic         ###   ########.fr       */
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
    Brain(std::string str);
    Brain(const Brain &B);
    Brain& operator=(const Brain &B);
};


#endif
