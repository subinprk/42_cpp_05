/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:56:00 by subpark           #+#    #+#             */
/*   Updated: 2024/05/10 19:25:12 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

class Bureaucrat
{
	public:
		Bureaucrat() = default; //curious about const string initialization
		Bureaucrat(string name, int grade);
		Bureaucrat(Bureaucrat &copy);
		Bureaucrat &operator=(Bureaucrat &copy);
		~Bureaucrat() = default;
		string	getName();
		int		getGrade();
		static void	GradeTooHighExeption();
		static void	GradeTooLowException();
	private:
		const string	_name;
		int				_grade;
};

ostream& operator<<(ostream &os, Bureaucrat &bureau);