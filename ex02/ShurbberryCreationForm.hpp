/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShurbberryCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:05:33 by subpark           #+#    #+#             */
/*   Updated: 2024/05/14 19:20:39 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHURBBERRYCREATIONFORM_HPP
# define SHURBBERRYCREATIONFORM_HPP
# include <iostream>
# include <string>
// # include <ofstream>
# include "AForm.hpp"

class Shurbberrycreationform : public AForm
{
    Shurbberrycreationform(Bureaucrat &a);
    Shurbberrycreationform(Shurbberrycreationform &copy);
    Shurbberrycreationform &operator=(Shurbberrycreationform &copy);
    ~Shurbberrycreationform();
};

#endif