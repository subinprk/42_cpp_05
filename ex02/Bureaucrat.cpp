/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:56:20 by subpark           #+#    #+#             */
/*   Updated: 2024/05/14 14:50:57 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("")
{
	_grade = -1;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
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

std::string	Bureaucrat::getName()
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
		std::cout << e.what() << std::endl;
		return ;
	}
	catch (Bureaucrat::GradeTooHighExeption &e)
	{
		_grade = -1;
		std::cout << e.what() << std::endl;
		return ;
	}
}

void Bureaucrat::gradeUp()
{
	putGrade(_grade - 1);
}

void Bureaucrat::gradeDown()
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

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(/*Form::GradeTooLowException*/std::exception &e)
	{
		std::cout << _name << " couldn't sign "
			<< form.getName() << " because " << e.what() << std::endl;
		return ;
	}
	// catch(Form::GradeTooHighException &e)
	// {
	// 	std::cout << _name << " couldn't sign "
	// 		<< form.getName() << " because " << e.what() << std::endl;
	// 	return ;
	// }
	std::cout << _name << " signed " << form.getName() << std::endl;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &bureau)
{
	os << bureau.getName() << ", bureaucrat grade " << bureau.getGrade();
	return (os);
}