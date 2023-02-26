/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:57:58 by rtakano           #+#    #+#             */
/*   Updated: 2023/02/26 17:21:06 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_hpp
#define Bureaucrat_hpp

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
private:
	const std::string name;
	int grade;

public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &origin);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &origin);
	std::string getName() const;
	int getGrate() const;

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Bureaucrat::GradeTooHighException : Grade is too high.");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Bureaucrat::GradeTooLowException : Grade is too low.");
		}
	};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &origin);
#endif
