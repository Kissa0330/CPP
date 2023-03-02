/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:58:01 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/01 21:38:19 by rtakano          ###   ########.fr       */
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
		throw GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw GradeTooLowException();
	}
	this->grade = grade;
	std::cout << "Bureaucrat constructor is called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor is called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &origin) : name(origin.name)
{
	this->grade = origin.grade;
	std::cout << "Bureaucrat copy constructor is called." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &origin)
{
	this->grade = origin.grade;
	std::cout << "Bureaucrat copy operator is called." << std::endl;
	return *this;
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

void Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(const AForm &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &origin)
{
	os << origin.getName() << " bureaucrat grade " << origin.getGrade() << std::endl;
	return os;
}
