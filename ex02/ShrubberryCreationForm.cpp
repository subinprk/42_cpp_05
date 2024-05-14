/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberryCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:05:52 by subpark           #+#    #+#             */
/*   Updated: 2024/05/14 19:28:56 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShurbberryCreationForm.hpp"
#include "Bureaucrat.hpp"

Shurbberrycreationform::Shurbberrycreationform(Bureaucrat &a)
    :AForm("Shurbberrycreationform", 145, 137)
{
    //std::ofstream shurb(a.getName() + "_shrubbery", ios_base::out);
    std::ofstream shurb;
    
}

Shurbberrycreationform::Shurbberrycreationform(Shurbberrycreationform &copy)
    :AForm("Shurbberrycreationform", 145, 137)
{
    putBool(copy.getBool());
}
Shurbberrycreationform &Shurbberrycreationform::operator=(Shurbberrycreationform &copy)
{
    putBool(copy.getBool());
}