/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:06:24 by subpark           #+#    #+#             */
/*   Updated: 2024/05/15 17:02:54 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    :AForm("RobotomyRequest", 25, 5)
{
    
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy)
    :AForm("RobotomyRequest", 25, 5)
{
    putBool(copy.getBool());
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &copy)
{
    putBool(copy.getBool());
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void    RobotomyRequestForm::execute(Bureaucrat const &a) const
{
    if (a.getGrade() > getSignG())
    {
        std::cout << "Robotomy failed" << std::endl;
        throw GradeTooLowException();
    }
    else if (a.getGrade() < getExeG())
    {
        std::cout << "Robotomy failed" << std::endl;
        throw GradeTooHighException();
    }
    else
		std::cout << "BRRRRRRRRRRRRRR\n" << a.getName() << " was robotomized" << std::endl;
}

