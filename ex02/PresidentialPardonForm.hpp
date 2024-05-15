/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:07:02 by subpark           #+#    #+#             */
/*   Updated: 2024/05/15 16:44:31 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm &copy);
        PresidentialPardonForm &operator=(PresidentialPardonForm &copy);
        ~PresidentialPardonForm() = default;
        void execute(Bureaucrat &a);
};

#endif
