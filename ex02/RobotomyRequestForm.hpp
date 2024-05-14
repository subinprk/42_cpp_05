/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:06:17 by subpark           #+#    #+#             */
/*   Updated: 2024/05/14 17:13:20 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class RobotomyRequest : public Bureaucrat
{
    RobotomyRequest(Bureaucrat &a);
    RobotomyRequest(RobotomyRequest &copy);
    RobotomyRequest &operator=(RobotomyRequest &copy);
    ~RobotomyRequest();
};

#endif