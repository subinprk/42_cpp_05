/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:56:20 by subpark           #+#    #+#             */
/*   Updated: 2024/05/11 22:41:48 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("")
{
	_grade = -1;
}

Bureaucrat::Bureaucrat(string name, int grade) : _name(name)
{
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy) :_name(copy._name)
{
	putGrade(copy.getGrade());
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &copy)
{
	//cannot re-assign const member
	//https://stackoverflow.com/questions/4136156/const-member-and-assignment-operator-how-to-avoid-the-undefined-behavior
	if (this != &copy)
		putGrade(copy.getGrade());
	return (*this);
}

string	Bureaucrat::getName()
{
	return (_name);
}

int Bureaucrat::getGrade()
{
	return (_grade);
}

void Bureaucrat::putGrade(int grade)
{
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighExeption();
		else
			_grade = grade;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		_grade = -1;
		cout << e.what() << endl;
		return ;
	}
	catch (Bureaucrat::GradeTooHighExeption &e)
	{
		_grade = -1;
		cout << e.what() << endl;
		return ;
	}
}

void Bureaucrat::GradeUp()
{
	putGrade(_grade - 1);
}

void Bureaucrat::GradeDown()
{
	putGrade(_grade + 1);
}

const char * Bureaucrat::GradeTooHighExeption::what() const throw()
{
	return ("Grade is too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

ostream &operator<<(ostream &os, Bureaucrat &bureau)
{
	os << bureau.getName() << ", bureaucrat grade " << bureau.getGrade();
	return (os);
}