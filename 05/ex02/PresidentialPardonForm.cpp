/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:48:10 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/02 14:20:44 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	this->target = "null";
	std::cout << "PresidentialPardonForm constructor is called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->target = target;
	std::cout << "PresidentialPardonForm constructor is called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &origin) : AForm("PresidentialPardonForm", 25, 5)
{
	this->target = origin.target;
	std::cout << "PresidentialPardonForm copy constructor is called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor is called." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &origin)
{
	this->target = origin.target;
	std::cout << "PresidentialPardonForm copy operator is called." << std::endl;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (!this->isSigned)
	{
		throw PresidentialPardonForm::IsSignFalseException();
	}
	if (this->reqExeGrade < executor.getGrade())
	{
		throw PresidentialPardonForm::GradeTooLowException();
	}
	std::cout << this->target << " is pardoned by Zaphod Beeblebrox!" << std::endl;
}
