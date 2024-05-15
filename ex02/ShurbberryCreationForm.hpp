/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShurbberryCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:05:33 by subpark           #+#    #+#             */
/*   Updated: 2024/05/15 18:33:21 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHURBBERRYCREATIONFORM_HPP
# define SHURBBERRYCREATIONFORM_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <cstdlib>
# include "AForm.hpp"

#define TREE "                                                        .\n\
                                              .         ;\n\
                 .              .              ;%     ;;\n\
                   ,           ,                :;%  %;\n\
                    :         ;                   :;%;'     .,\n\
           ,.        %;     %;            ;        %;'    ,;\n\
             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
              %;       %;%;      ,  ;       %;  ;%;   ,%;'\n\
               ;%;      %;        ;%;        % ;%;  ,%;'\n\
                `%;.     ;%;     %;'         `;%%;.%;'\n\
                 `:;%.    ;%%. %@;        %; ;@%;%'\n\
                    `:%;.  :;bd%;          %;@%;'\n\
                      `@%:.  :;%.         ;@@%;'\n\
                        `@%.  `;@%.      ;@@%;\n\
                          `@%%. `@%%    ;@@%;\n\
                            ;@%. :@%%  %@@%;\n\
                              %@bd%%%bd%%:;\n\
                                #@%%%%%:;;\n\
                                %@@%%%::;\n\
                                %@@@%(o);  . '\n\
                                %@@@o%;:(.,'\n\
                            `.. %@@@o%::;\n\
                               `)@@@o%::;\n\
                                %@@(o)::;\n\
                               .%@@@@%::;\n\
                               ;%@@@@%::;.\n\
                              ;%@@@@%%:;;;.\n\
                          ...;%@@@@@%%:;;;;,"

class Shurbberrycreationform : public AForm
{
	public:
		Shurbberrycreationform(/*Bureaucrat &a*/);
		Shurbberrycreationform(Shurbberrycreationform &copy);
		Shurbberrycreationform &operator=(Shurbberrycreationform &copy);
		~Shurbberrycreationform();
		virtual void execute(Bureaucrat const &a) const;
	// private:
	// 	std::ofstream _shurb;
};

#endif