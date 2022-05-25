/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:38:51 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/24 18:41:52 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    const Animal *Array[8];
    const Dog dog;
    const Cat cat;
    dog.getAddr();
    cat.getAddr();
    for (int i = 0; i < 4; ++i)
    {
        std::cout << "----- " << i + 1 << " -----" << std::endl;
        Array[i] = new Dog(dog);
        Array[i]->makeSound();
        Array[i]->getAddr();
    }
    for (int i = 4; i < 8; ++i)
    {
        std::cout << "----- " << i + 1 << " -----" << std::endl;
        Array[i] = new Cat(cat);
        Array[i]->makeSound();
        Array[i]->getAddr();
    }
    for (int i = 0; i < 8; ++i)
    {
        std::cout << "----- " << i + 1 << " -----" << std::endl;
        delete Array[i];
    }
    std::cout << "-------------" << std::endl;
    return (0);
}
