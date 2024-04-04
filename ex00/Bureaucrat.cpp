/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:37:33 by subpark           #+#    #+#             */
/*   Updated: 2024/04/04 17:47:22 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name)
{
	try
	{
		if (grade < 1 || grade > 150)
			throw std::invalid_argument("Score is Invalid");
		this->_grade = grade;
	}
	catch (const std::exception &ex)
	{
		std::cerr << "Exception caught in Constructor: " << ex.what() << std::endl;
		throw;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy._name)
{
	this->_grade = copy._grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this != &copy)
	{
		//this->_name = std::string(copy._name);
		this->_grade = copy._grade;
	}
	return *this;
}

std::ostream &Bureaucrat::operator<<(std::ostream &os)
{
	os << getName() << ", bureaucrat grade " << getGrade();
	return os;
}

void	Bureaucrat::putGrade(int grade)
{
	try
	{
		if (grade < 1 || grade > 150)
			throw std::invalid_argument("Score is Invalid");
		this->_grade = grade;
	}
	catch (const std::exception &ex)
	{
		std::cerr << "Exception caught in putGrade: " << ex.what() << std::endl;
		throw;
	}
}

std::string Bureaucrat::getName()
{
	return (_name);
}

int	Bureaucrat::getGrade()
{
	return (_grade);
}