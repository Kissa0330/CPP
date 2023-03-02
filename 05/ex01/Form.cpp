/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:43:19 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/01 22:41:03 by rtakano          ###   ########.fr       */
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

bool Form::getIsSigned()
{
	return this->isSigned;
}

std::string Form::getName()
{
	return this->name;
}
