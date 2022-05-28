/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:34:50 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/28 16:38:46 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    ShrubberyCreationForm();
    const std::string target;
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &form);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &form);
    std::string getTarget() const;
    virtual void execute(Bureaucrat const &executor) const;
};

#endif
