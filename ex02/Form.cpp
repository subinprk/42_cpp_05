/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 17:14:52 by subpark           #+#    #+#             */
/*   Updated: 2024/05/14 14:54:27 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int signGrade, int exeGrade): _name(name),
							_signGrade(signGrade), _exeGrade(exeGrade)
{
	try
	{
		if (signGrade > 150 || exeGrade > 150)
		{
			signGrade = -1;
			throw(Form::GradeTooLowException());
		}
		else if (signGrade < exeGrade)
		{
			signGrade = -1;
			throw(Form::GradeTooLowException());
		}
		else if (signGrade < 1 || exeGrade < 1)
		{
			signGrade = -1;
			throw(Form::GradeTooLowException());
		}
		else 
			std::cout << *this << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "cannot make form " << name << " because " << e.what() << '\n';
	}
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
	//try
//	{
		// if (b.getGrade() <= _signGrade)
		// {
		// 	std::cout << b.getName() << " signed " << _name << std::endl;
		// 	_isSigned = true;
		// }
		if (b.getGrade() > _signGrade)
		//else
			throw GradeTooLowException();
		else if (b.getGrade() < _exeGrade)
			throw GradeTooHighException();
		else
			_isSigned = true;
//	}
	// catch(Form::GradeTooLowException &e)
	// {
	// 	std::cout << b.getName() << " couldn't sign "
	// 		<< this->_name << " because " << e.what() << std::endl;
	// }
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too High");
}

std::ostream &operator<<(std::ostream &os, Form &form)
{
	os << form.getName() << " sign Grade is " << form.getSignG()
		<< ", execution Grade is " << form.getExeG()
		<< ", is getted: " << form.getBool();
	return (os);
}
