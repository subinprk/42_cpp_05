/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:06:49 by subpark           #+#    #+#             */
/*   Updated: 2024/05/15 16:43:51 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    :AForm("PresidentialPardonForm", 25, 5)
{
    
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy)
    :AForm("PresidentialPardonForm", 25, 5)
{
    putBool(copy.getBool());
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &copy)
{
    if (this != &copy)
        putBool(copy.getBool());
    return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat &a)
{
   if (a.getGrade() > getSignG())
    //else
        throw GradeTooLowException();
    else if (a.getGrade() < getExeG())
        throw GradeTooHighException();
    else
		std::cout << a.getName() << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}
