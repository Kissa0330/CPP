/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:43:16 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/04 22:17:23 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
protected:
	const std::string name;
	bool isSigned;
	const int reqSignGrade;
	const int reqExeGrade;
public:
	AForm();
	AForm(std::string name, int reqSignGrade, int reqExeGrade);
	AForm(const AForm &origin);
	virtual ~AForm();
	AForm &operator=(const AForm &origin);
	void beSigned(const Bureaucrat &bureaucrat);
	virtual void execute(const Bureaucrat &executor) const = 0;
	bool getIsSigned() const;
	std::string getName() const;
	int getReqSignGrade() const;
	int getReqExeGrade() const;

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class IsSignFalseException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};
std::ostream &operator<<(std::ostream &os, const AForm &origin);
#endif
