/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:56:05 by subpark           #+#    #+#             */
/*   Updated: 2024/05/16 16:10:43 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShurbberryCreationForm.hpp"

int main()
{
	Bureaucrat a("A", 12);
	Bureaucrat b("B", 150);
	Bureaucrat c("C", 151);
	Bureaucrat d("D", 0);
	Bureaucrat e("E", 2);
	Bureaucrat f;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	std::cout << f << std::endl;

	a.gradeUp();
	b.gradeDown();
	c.gradeUp();
	d.gradeDown();
	e.gradeUp();

	{
		std::cout << "---------------------------------------" << std::endl;

		Bureaucrat *a = new Bureaucrat("Subin", 1);
		RobotomyRequestForm *b = new RobotomyRequestForm();
		Shurbberrycreationform *c = new Shurbberrycreationform();
		PresidentialPardonForm *d = new PresidentialPardonForm();

		Bureaucrat num2("5th", 140);

		a->executeForm(*b);
		a->executeForm(*c);
		a->executeForm(*d);

		num2.executeForm(*b);
		num2.executeForm(*c);
		num2.executeForm(*d);

		delete(a);
		delete(b);
		delete(c);
		delete(d);
	}
	// AForm formA("Math", 50, 10);
	// AForm formB("weird", -1, 100);
	// a.signForm(formA);
	// e.signForm(formA);
	// c.signForm(formA);

	// std::cout << formA << std::endl;
	

	return (0);
}