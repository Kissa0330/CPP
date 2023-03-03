/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 22:41:32 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/03 21:07:45 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = "null";
	std::cout << "RobotomyRequestForm constructor is called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
	std::cout << "RobotomyRequestForm constructor is called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &origin) : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = origin.target;
	std::cout << "RobotomyRequestForm copy constructor is called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor is called." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &origin)
{
	this->target = origin.target;
	std::cout << "RobotomyRequestForm copy operator is called." << std::endl;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	std::srand( time(NULL) );
	if (!this->isSigned)
	{
		throw RobotomyRequestForm::IsSignFalseException();
	}
	if (this->reqExeGrade < executor.getGrade())
	{
		throw RobotomyRequestForm::GradeTooLowException();
	}

	std::cout << "Dddddddddd....." << std::endl;
	if (std::rand() % 100 < 50)
	{
		std::cout << this->target << "'s Robotomy is succeed!" << std::endl;
	}
	else
	{
		std::cout << this->target  << "'s Robotomy is Failed..." << std::endl;
	}
}
