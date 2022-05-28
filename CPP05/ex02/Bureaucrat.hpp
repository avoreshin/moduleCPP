/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:30:58 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/28 16:31:04 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat {
private:
    Bureaucrat();
    const std::string   name;
    int                 grade;
public:
    virtual ~Bureaucrat();
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat &operator=(Bureaucrat const &other);

    const std::string &getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(Form &form);
    void executeForm(Form const &form);
    class GradeTooHighException: public std::exception {
        virtual const char* what() const throw();
    };
    class GradeTooLowException: public std::exception {
        virtual const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &other);

#endif
