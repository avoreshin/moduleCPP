/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:30:09 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/28 16:30:26 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
    {
        Bureaucrat Angelina("Angelina", 22);
        std::cout << "name: " << Angelina.getName() << std::endl;
        std::cout << "grade: " << Angelina.getGrade() << std::endl;
        std::cout << Angelina << "\n";
        Angelina.decrementGraide();
        std::cout << "decrementGraide() -> " << Angelina << std::endl;
        Angelina.incrementGraide();
        std::cout << "incrementGraide() -> " << Angelina  << std::endl;

    }
    std::cout << "--------1----------" << std::endl;
    {
        try
        {
            Bureaucrat a("ANDREY", 0);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "--------2----------" << std::endl;
    {
        try
        {
            Bureaucrat a("ANDREY", 151);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "--------3----------" << std::endl;
    {
        try
        {
            Bureaucrat a("ANDREY", 1);
            a.incrementGraide();
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "--------4----------" << std::endl;
    {
        try
        {
            Bureaucrat a("ANDREY", 150);
            a.decrementGraide();
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    return 0;
}
