cmake_minimum_required(VERSION 3.19)
project(moduleCPP)

set(CMAKE_CXX_STANDARD 98)

include_directories(CCP02/ex03)

add_executable(moduleCPP
        CPP02/ex03/Bsp.cpp
        CPP02/ex03/Bsp.hpp
        CPP02/ex03/Fixed.cpp
        CPP02/ex03/Fixed.hpp
        CPP02/ex03/Point.cpp
        CPP02/ex03/Point.hpp
        CPP02/ex03/Fixed.cpp
        CPP02/ex03/main.cpp
        CPP02/ex03/Makefile
        CPP03/ex00/ClapTrap.cpp CPP03/ex00/ClapTrap.hpp CPP03/ex01/ScavTrap.cpp CPP03/ex01/ScavTrap.hpp CPP03/ex03/DiamondTrap.cpp CPP03/ex03/DiamondTrap.hpp CPP04/ex00/Dog.cpp CPP04/ex00/Dog.hpp CPP04/ex00/Cat.cpp CPP04/ex00/Cat.hpp CPP04/ex00/Animal.cpp CPP04/ex00/Animal.hpp CPP04/ex01/Brain.cpp CPP04/ex01/Brain.hpp)