/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberryCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:05:52 by subpark           #+#    #+#             */
/*   Updated: 2024/05/15 18:33:11 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShurbberryCreationForm.hpp"
#include "Bureaucrat.hpp"

Shurbberrycreationform::Shurbberrycreationform(/*Bureaucrat &a*/)
    :AForm("Shurbberrycreationform", 145, 137)
{
    //std::ofstream shurb(a.getName() + "_shrubbery", ios_base::out);
    // _shurb.open(a.getName() + "_shrubbery");
    // if (_shurb)
    //     std::cerr << "Failed to open file\n";
    
}

Shurbberrycreationform::Shurbberrycreationform(Shurbberrycreationform &copy)
    :AForm("Shurbberrycreationform", 145, 137)
{
    putBool(copy.getBool());
}

Shurbberrycreationform &Shurbberrycreationform::operator=(Shurbberrycreationform &copy)
{
    putBool(copy.getBool());
    return (*this);
}

Shurbberrycreationform::~Shurbberrycreationform()
{
   // _shurb.close();
}

void Shurbberrycreationform::execute(Bureaucrat const &a) const
{
    if (a.getGrade() > getSignG())
        throw GradeTooLowException();
    else if (a.getGrade() < getExeG())
        throw GradeTooHighException();
    else
	{
        std::ofstream ofs(a.getName() + "_shrubbery");
        if (!ofs) {
            throw std::ios_base::failure("Failed to open file");
        }
        ofs << TREE;
        if (!ofs) {
            throw std::ios_base::failure("Failed to write to file");
        }
        ofs.close();
    }
}

// void Shurbberrycreationform::Tree::getDir()
// {
//     _pwd = getenv("PWD");
// }