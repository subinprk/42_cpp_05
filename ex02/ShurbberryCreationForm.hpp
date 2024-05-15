/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShurbberryCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:05:33 by subpark           #+#    #+#             */
/*   Updated: 2024/05/15 16:07:21 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHURBBERRYCREATIONFORM_HPP
# define SHURBBERRYCREATIONFORM_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <cstdlib>
//# include <sys/types.h>
//# include <dirent.h>
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
		Shurbberrycreationform(Bureaucrat &a);
		Shurbberrycreationform(Shurbberrycreationform &copy);
		Shurbberrycreationform &operator=(Shurbberrycreationform &copy);
		~Shurbberrycreationform();
		void execute(Bureaucrat &a);
	private:
		std::ofstream _shurb;
};

#endif