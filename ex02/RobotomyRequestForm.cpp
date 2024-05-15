/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:06:24 by subpark           #+#    #+#             */
/*   Updated: 2024/05/15 16:14:24 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequest::RobotomyRequest(Bureaucrat &a)
    :AForm("RobotomyRequest", 25, 5)
{
    
}

RobotomyRequest::RobotomyRequest(RobotomyRequest &copy)
    :AForm("RobotomyRequest", 25, 5)
{
    putBool(copy.getBool());
}

RobotomyRequest &RobotomyRequest::operator=(RobotomyRequest &copy)
{
    putBool(copy.getBool());
}

RobotomyRequest::~RobotomyRequest()
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

