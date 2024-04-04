/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:37:20 by subpark           #+#    #+#             */
/*   Updated: 2024/04/04 17:58:34 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat{
	private:
		std::string const	_name;
		int					_grade;

	public:
		Bureaucrat() = default; //curious about how name will be filled
		Bureaucrat(std::string const &name, int grade); // Parameterized constructor
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &copy);
		std::ostream &operator<<(std::ostream &os);
		~Bureaucrat() = default;
		void		putGrade(int grade);
		std::string	getName();
		int			getGrade();

		class GradeTooLowException : public std::exception
		{
			public:
				const char  *what() const throw(){
					return ("TooLowException");
				}
		};
		class GradeTooHighException : public std::exception
		{
			public:
				const char  *what() const throw(){
					return ("TooHighException");
				}
		};
};

#endif