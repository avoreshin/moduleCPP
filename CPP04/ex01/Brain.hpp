//
// Created by Jesica Lamonica on 5/25/22.
//

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
