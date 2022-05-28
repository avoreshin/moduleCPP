/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:31:41 by jlamonic          #+#    #+#             */
/*   Updated: 2022/05/28 16:37:45 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    RobotomyRequestForm();
    const std::string target;
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &form);
    ~RobotomyRequestForm();
    RobotomyRequestForm &operator=(const RobotomyRequestForm &form);
    std::string getTarget() const;
    virtual void execute(Bureaucrat const &executor) const;
};

#endif
