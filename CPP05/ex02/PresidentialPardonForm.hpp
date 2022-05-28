/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:31:30 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/28 16:37:34 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    PresidentialPardonForm();
    const std::string target;
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &form);
    ~PresidentialPardonForm();
    PresidentialPardonForm &operator=(const PresidentialPardonForm &form);
    std::string getTarget() const;
    virtual void execute(Bureaucrat const &executor) const;
};

#endif
