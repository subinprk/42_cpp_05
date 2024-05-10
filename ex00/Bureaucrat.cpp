/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:56:20 by subpark           #+#    #+#             */
/*   Updated: 2024/05/10 19:28:19 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(string name, int grade) : _name(name)
{
	if (grade > 150)
		throw
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy) :_name(copy._name)
{
	this->_grade = copy.getGrade();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &copy)
{
	//cannot re-assign const member
	//https://stackoverflow.com/questions/4136156/const-member-and-assignment-operator-how-to-avoid-the-undefined-behavior
	if (this != &copy)
		this->_grade = copy.getGrade();
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

ostream &operator<<(ostream &os, Bureaucrat &bureau)
{
	os << bureau.getName() << ", bureaucrat grade " << bureau.getGrade();
	return (os);
}