/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 17:14:52 by subpark           #+#    #+#             */
/*   Updated: 2024/05/12 19:38:38 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signGrade, int exeGrade): _name(name),
							_signGrade(signGrade), _exeGrade(exeGrade)
{
	if (signGrade > 150 || exeGrade > 150)
		throw(Form::GradeTooLowException());
	else if (signGrade < 1 || exeGrade < 1)
		throw(Form::GradeTooLowException());
}

Form::Form(const Form &copy): _name(copy._name), _signGrade(copy._signGrade),
						_exeGrade(copy._exeGrade)
{
	_isSigned = copy._isSigned;
}

Form &Form::operator=(const Form &copy)
{
	if (this != &copy)
	{
		_isSigned = copy._isSigned;
	}
	return (*this);
}

std::string  Form::getName()
{
	return (_name);
}

int Form::getSignG()
{
	return (_signGrade);
}

int Form::getExeG()
{
	return (_exeGrade);
}

bool Form::getBool()
{
	return (_isSigned);
}

void	Form::beSigned(Bureaucrat &b)
{
	try
	{
		if (b.getGrade() <= _signGrade)
			std::cout << b.getName() << " signed " << _name << std::endl;
		else
			throw GradeTooLowException();
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cout << b.getName() << " couldn't sign "
			<< _name << " because " << e.what() << std::endl;
	}
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too High");
}
