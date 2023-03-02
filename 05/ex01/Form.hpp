/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:43:16 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/02 17:52:19 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string name;
	bool isSigned;
	const int reqSignGrade;
	const int reqExeGrade;
public:
	Form();
	Form(std::string name, int reqSignGrade, int reqExeGrade);
	Form(const Form &origin);
	~Form();
	Form &operator=(const Form &origin);
	void beSigned(const Bureaucrat &bureaucrat);
	bool getIsSigned() const;
	std::string getName() const;
	int getReqSignGrade() const;
	int getReqExeGrade() const;

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("grade is too high.");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("grade is too low.");
		}
	};
};
std::ostream &operator<<(std::ostream &os, const Form &origin);
#endif
