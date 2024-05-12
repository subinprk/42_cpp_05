/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 17:14:52 by subpark           #+#    #+#             */
/*   Updated: 2024/05/12 19:04:07 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signGrade, int exeGrade): _name(name),
							_signGrade(signGrade), _exeGrade(exeGrade)
{
	
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
