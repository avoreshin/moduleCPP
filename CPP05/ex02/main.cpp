/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:31:18 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/28 16:37:01 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
    Form *f1 = new PresidentialPardonForm("Home");
    Form *f2 = new RobotomyRequestForm("Home");
    Form *f3 = new ShrubberyCreationForm("Home");
    Bureaucrat fedor("Fedor", 6);
    fedor.executeForm(*f1);
    fedor.signForm(*f1);
    fedor.signForm(*f2);
    fedor.signForm(*f3);
    fedor.executeForm(*f1);
    fedor.executeForm(*f2);
    fedor.executeForm(*f3);
    delete f1;
    delete f2;
    delete f3;
    return 0;
}
