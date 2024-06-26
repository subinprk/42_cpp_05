/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 17:15:03 by subpark           #+#    #+#             */
/*   Updated: 2024/05/14 14:40:55 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP
# include <string>
# include <iostream>

class Bureaucrat;
class AForm
{
	public:
		AForm() = default;
		AForm(std::string name, int signGrage, int exeGrade);
		AForm(const AForm &copy);
		AForm &operator = (const AForm &copy);
		virtual ~AForm() = default;
		std::string	getName() const;
		int		getSignG() const;
		int		getExeG() const;
		bool	getBool() const;
		void	putBool(bool x);
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
		virtual void execute(Bureaucrat const & executor) const = 0;

	private:
		const std::string	_name;
		const int			_signGrade;
		const int			_exeGrade;
		bool				_isSigned;
};

std::ostream &operator<<(std::ostream &os, AForm &AForm);

#endif