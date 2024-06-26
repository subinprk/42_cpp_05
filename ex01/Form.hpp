/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 17:15:03 by subpark           #+#    #+#             */
/*   Updated: 2024/05/16 15:42:11 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iostream>

class Bureaucrat;
class Form
{
	public:
		//Form() = default;
		Form(std::string name, int signGrage, int exeGrade);
		Form(const Form &copy);
		Form &operator = (const Form &copy);
		~Form() = default;
		std::string	getName();
		int		getSignG();
		int		getExeG();
		bool	getBool();
		void	beSigned(Bureaucrat &b);
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		const std::string	_name;
		const int			_signGrade;
		const int			_exeGrade;
		bool				_isSigned;
};

std::ostream &operator<<(std::ostream &os, Form &form);

#endif