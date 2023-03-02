/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:28:46 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/02 15:42:40 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor is called." << std::endl;
}

Intern::Intern(const Intern &origin)
{
	(void) origin;
	std::cout << "Intern copy constructor is called." << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor is called." << std::endl;
}

Intern &Intern::operator=(const Intern &origin)
{
	(void) origin;
	std::cout << "Intern copy operator is called." << std::endl;
	return (*this);
}

AForm *createShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm *createRobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm *createPresidentialPardon(std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm *(*createFormArray[])(std::string target) = {
    createShrubbery,
    createRobotomy,
    createPresidentialPardon,
};

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string formNameList[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (size_t i = 0; i < 3; i++)
	{
		if (name == formNameList[i])
		{
			std::cout << "Intern creates " << name << "." << std::endl;
			return createFormArray[i](target);
		}
	}
	std::cout << "Intern can't create " << name << "." << std::endl;
	return NULL;
}
