/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:56:05 by subpark           #+#    #+#             */
/*   Updated: 2024/05/11 22:39:56 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("A", 1);
	Bureaucrat b("B", 150);
	Bureaucrat c("C", 151);
	Bureaucrat d("D", 0);
	Bureaucrat e("E", 2);
	Bureaucrat f;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << f << endl;

	a.GradeUp();
	b.GradeDown();
	c.GradeUp();
	d.GradeDown();
	e.GradeUp();

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;

	a.GradeUp();
	b.GradeDown();
	c.GradeUp();
	d.GradeDown();
	e.GradeUp();

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;

	a.GradeUp();
	b.GradeDown();
	c.GradeUp();
	d.GradeDown();
	e.GradeUp();

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;

	a.GradeUp();
	b.GradeDown();
	c.GradeUp();
	d.GradeDown();
	e.GradeUp();

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;

	return (0);
}