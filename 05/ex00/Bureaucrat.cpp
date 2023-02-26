/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:58:01 by rtakano           #+#    #+#             */
/*   Updated: 2023/02/26 17:34:19 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("null")
{
	this->grade = 150;
	std::cout << "Bureaucrat constructor is called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
	{
		throw GradeTooLowException();
	}
	else if (grade > 150)
	{
		throw GradeTooHighException();
	}
	this->grade = grade;
	std::cout << "Bureaucrat constructor is called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor is called." << std::endl;
}

std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::upGrade()
{
	if (this->grade <= 1)
	{
		throw GradeTooLowException();
	}
	this->grade--;
}

void Bureaucrat::downGrade()
{
	if (grade >= 150)
	{
		throw GradeTooHighException();
	}
	this->grade++;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &origin)
{
	os << origin.getName() << " bureaucrat grade " << origin.getGrade() << std::endl;
	return os;
}
