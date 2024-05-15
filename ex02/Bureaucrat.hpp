/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:56:00 by subpark           #+#    #+#             */
/*   Updated: 2024/05/15 16:54:29 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <stdexcept>

#include "AForm.hpp"

class Bureaucrat
{
	public:
		Bureaucrat(); //curious about const string initialization
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat &copy);
		Bureaucrat &operator=(Bureaucrat &copy);
		~Bureaucrat() = default;
		std::string	getName() const;
		int		getGrade() const;
		void	putGrade(int grade);
		void	gradeUp();
		void	gradeDown();
		void	signForm(AForm &form);
		void	executeForm(AForm const &form);
		class	GradeTooHighExeption : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	private:
		const std::string	_name;
		int					_grade;
};

std::ostream& operator<<(std::ostream &os, Bureaucrat &bureau);

#endif