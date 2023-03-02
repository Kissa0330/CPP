/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:43:19 by rtakano           #+#    #+#             */
/*   Updated: 2023/02/26 19:19:33 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("null"), reqSignGrade(150), reqExeGrade(150)
{
	this->isSigned = false;
	std::cout << "AForm constructor is called." << std::endl;
}

AForm::AForm(std::string name, int reqSignGrade, int reqExeGrade) : name(name), reqSignGrade(reqSignGrade), reqExeGrade(reqExeGrade)
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
	std::cout << "AForm constructor is called." << std::endl;
}

AForm::AForm(const AForm &origin) : name(origin.name), reqSignGrade(origin.reqExeGrade), reqExeGrade(origin.reqExeGrade)
{
	std::cout << "AForm copy constructor is called." << std::endl;
}

AForm &AForm::operator=(const AForm &origin)
{
	this->isSigned = origin.isSigned;
	std::cout << "AForm copy operator is called." << std::endl;
	return *this;
}

AForm::~AForm()
{
	std::cout << "AForm destructor is called." << std::endl;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->reqSignGrade)
	{
		throw GradeTooLowException();
	}
	this->isSigned = true;
}

bool AForm::getIsSigned() const
{
	return this->isSigned;
}

std::string AForm::getName() const
{
	return this->name;
}

int AForm::getReqSignGrade() const
{
	return this->reqSignGrade;
}

int AForm::getReqExeGrade() const
{
	return this->reqExeGrade;
}

std::ostream &operator<<(std::ostream &os, const AForm &origin)
{
	os << "Form name:" << origin.getName() << " Form isSigned:" << origin.getIsSigned() << " Form reqSignGrade:" << origin.getReqSignGrade() << " Form reqExeGrade:" << origin.getReqExeGrade() << std::endl;
	return os;
}
