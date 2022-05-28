/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:09:21 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/28 16:29:42 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>

class Bureaucrat {
private:
    Bureaucrat();
    const std::string   _name;
    int                 _grade;
public:
    virtual ~Bureaucrat();
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat &operator=(Bureaucrat const &other);

    const std::string getName() const;
    int getGrade() const;
    void incrementGraide();
    void decrementGraide();
    class GradeTooHighException: public std::exception {
        virtual const char* what() const throw();
    };
    class GradeTooLowException: public std::exception {
        virtual const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &other);

#endif
