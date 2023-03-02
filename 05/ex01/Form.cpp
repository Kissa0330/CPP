/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:43:19 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/02 17:54:43 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("null"), reqSignGrade(150), reqExeGrade(150)
{
	this->isSigned = false;
	std::cout << "Form constructor is called." << std::endl;
}

Form::Form(std::string name, int reqSignGrade, int reqExeGrade) : name(name), reqSignGrade(reqSignGrade), reqExeGrade(reqExeGrade)
{
	if (reqSignGrade > 150 || reqExeGrade > 150)
	{
		throw GradeTooLowException();
	}
	else if (reqSignGrade < 1 || reqExeGrade < 1)
	{
		throw GradeTooHighException();
	}
	this->isSigned = false;
	std::cout << "Form constructor is called." << std::endl;
}

Form::Form(const Form &origin) : name(origin.name), reqSignGrade(origin.reqExeGrade), reqExeGrade(origin.reqExeGrade)
{
	std::cout << "Form copy constructor is called." << std::endl;
}

Form &Form::operator=(const Form &origin)
{
	this->isSigned = origin.isSigned;
	std::cout << "Form copy operator is called." << std::endl;
	return *this;
}

Form::~Form()
{
	std::cout << "Form destructor is called." << std::endl;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->reqSignGrade)
	{
		throw GradeTooLowException();
	}
	this->isSigned = true;
}

bool Form::getIsSigned() const
{
	return this->isSigned;
}

std::string Form::getName() const
{
	return this->name;
}

int Form::getReqSignGrade() const
{
	return this->reqSignGrade;
}

int Form::getReqExeGrade() const
{
	return this->reqExeGrade;
}

std::ostream &operator<<(std::ostream &os, const Form &origin)
{
	os << "Form name:" << origin.getName() << " Form isSigned:" << origin.getIsSigned() << " Form reqSignGrade:" << origin.getReqSignGrade() << " Form reqExeGrade:" << origin.getReqExeGrade() << std::endl;
	return os;
}
