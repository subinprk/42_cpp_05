/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberryCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:05:52 by subpark           #+#    #+#             */
/*   Updated: 2024/05/15 15:33:01 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShurbberryCreationForm.hpp"
#include "Bureaucrat.hpp"

Shurbberrycreationform::Shurbberrycreationform(Bureaucrat &a)
    :AForm("Shurbberrycreationform", 145, 137)
{
    //std::ofstream shurb(a.getName() + "_shrubbery", ios_base::out);
    _shurb.open(a.getName() + "_shrubbery");
    
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

Shurbberrycreationform::~Shurbberrycreationform()
{
    _shurb.close();
}

void Shurbberrycreationform::printTree(std::string arg)
{
//     std::system("ls > ___tmp");
//     //std::string str;
//     std::ifstream ls("___tmp");
    
//     if (!ls.is_open())
//         std::cerr << "file open error\n";
//     std::string line;
//     while (std::getline);
// }
	_shurb << TREE;
}


// void Shurbberrycreationform::Tree::getDir()
// {
//     _pwd = getenv("PWD");
// }