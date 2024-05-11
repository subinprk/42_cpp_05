/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:56:00 by subpark           #+#    #+#             */
/*   Updated: 2024/05/11 22:41:43 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class Bureaucrat
{
	public:
		Bureaucrat(); //curious about const string initialization
		Bureaucrat(string name, int grade);
		Bureaucrat(Bureaucrat &copy);
		Bureaucrat &operator=(Bureaucrat &copy);
		~Bureaucrat() = default;
		string	getName();
		int		getGrade();
		void	putGrade(int grade);
		void	GradeUp();
		void	GradeDown();
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
		const string	_name;
		int				_grade;
};

ostream& operator<<(ostream &os, Bureaucrat &bureau);