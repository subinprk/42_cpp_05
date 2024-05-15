/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:06:24 by subpark           #+#    #+#             */
/*   Updated: 2024/05/15 15:57:57 by subpark          ###   ########.fr       */
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

void    RobotomyRequestForm::execute(Bureaucrat &a)
{
   if (a.getGrade() < getExeG() && a.getGrade() > getSignG())
		std::cout << "BRRRRRRRRRRRRRR\n" << a.getName() << " was robotomized" << std::endl;
	else
		std::cout << "Robotomy failed" << std::endl;
}

