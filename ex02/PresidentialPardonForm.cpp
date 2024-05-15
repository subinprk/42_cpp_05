/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:06:49 by subpark           #+#    #+#             */
/*   Updated: 2024/05/15 16:03:33 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(Bureaucrat &a)
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
    if (a.getGrade() < getExeG() && a.getGrade() > getSignG())
		std::cout << a.getName() << "has been pardoned by Zaphod Beeblebrox" << std::endl;
	else
		std::cout << "I cannot get the concept of this project" << std::endl;
}
