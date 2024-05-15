/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 17:14:52 by subpark           #+#    #+#             */
/*   Updated: 2024/05/14 14:54:27 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string name, int signGrade, int exeGrade): _name(name),
							_signGrade(signGrade), _exeGrade(exeGrade)
{
	try
	{
		if (signGrade > 150 || exeGrade > 150)
		{
			signGrade = -1;
			throw(AForm::GradeTooLowException());
		}
		else if (signGrade < exeGrade)
		{
			signGrade = -1;
			throw(AForm::GradeTooLowException());
		}
		else if (signGrade < 1 || exeGrade < 1)
		{
			signGrade = -1;
			throw(AForm::GradeTooLowException());
		}
		else 
			std::cout << *this << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "cannot make AForm " << name << " because " << e.what() << '\n';
	}
}

AForm::AForm(const AForm &copy): _name(copy._name), _signGrade(copy._signGrade),
						_exeGrade(copy._exeGrade)
{
	_isSigned = copy._isSigned;
}

AForm &AForm::operator=(const AForm &copy)
{
	if (this != &copy)
	{
		_isSigned = copy._isSigned;
	}
	return (*this);
}

std::string  AForm::getName() const
{
	return (_name);
}

int AForm::getSignG()
{
	return (_signGrade);
}

int AForm::getExeG()
{
	return (_exeGrade);
}

bool AForm::getBool()
{
	return (_isSigned);
}

void AForm::putBool(bool x)
{
	_isSigned = x;
}

void	AForm::beSigned(Bureaucrat &b)
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
	// catch(AForm::GradeTooLowException &e)
	// {
	// 	std::cout << b.getName() << " couldn't sign "
	// 		<< this->_name << " because " << e.what() << std::endl;
	// }
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low");
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too High");
}

std::ostream &operator<<(std::ostream &os, AForm &AForm)
{
	os << AForm.getName() << " sign Grade is " << AForm.getSignG()
		<< ", execution Grade is " << AForm.getExeG()
		<< ", is getted: " << AForm.getBool();
	return (os);
}
