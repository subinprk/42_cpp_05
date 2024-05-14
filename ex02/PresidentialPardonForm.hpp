/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:07:02 by subpark           #+#    #+#             */
/*   Updated: 2024/05/14 17:09:57 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"
#include <string>
#include <iostream>

class PresidentialPardonForm : public AForm
{
    PresidentialPardonForm(Bureaucrat &a);
    PresidentialPardonForm(PresidentialPardonForm &copy);
    PresidentialPardonForm &operator=(PresidentialPardonForm &copy);
    ~PresidentialPardonForm() = default;
};

#endif
