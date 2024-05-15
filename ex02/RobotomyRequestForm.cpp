/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:06:24 by subpark           #+#    #+#             */
/*   Updated: 2024/05/15 16:46:36 by subpark          ###   ########.fr       */
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

const char *AForm::GradeTooLowException::what() const throw()
{
    std::cout << "Robotomy failed" << std::endl;
	return ("Grade is too Low");
}

const char *AForm::GradeTooHighException::what() const throw()
{
    std::cout << "Robotomy failed" << std::endl;
	return ("Grade is too High");
}

void    RobotomyRequestForm::execute(Bureaucrat &a)
{
    if (a.getGrade() > getSignG())
        throw GradeTooLowException();
    else if (a.getGrade() < getExeG())
        throw GradeTooHighException();
    else
		std::cout << "BRRRRRRRRRRRRRR\n" << a.getName() << " was robotomized" << std::endl;
}

