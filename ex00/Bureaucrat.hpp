/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:37:20 by subpark           #+#    #+#             */
/*   Updated: 2024/04/03 16:48:07 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat{
	private:
		std::string const	_name;
		int					grade;

	public:
		Bureaucrat() = default;
		Bureaucrat(std::string const &name, int grade); // Parameterized constructor
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &copy);
		~Bureaucrat() = default;
		void	putName();
		void	putGrade();
		void	getName();
		void	getGrade();
};

#endif