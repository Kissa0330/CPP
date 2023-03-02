/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:58:04 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/02 14:07:38 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

void abstract_test()
{
	// AForm test;
}

void exe_Shrubbery_test()
{
	ShrubberyCreationForm test = ShrubberyCreationForm("test");
	Bureaucrat test1 = Bureaucrat("test1", 146);
	Bureaucrat test2 = Bureaucrat("test2", 130);
	test2.executeForm(test);
	test1.signForm(test);
	test2.signForm(test);
	test2.executeForm(test);
}

void exe_Presidential_test()
{
	PresidentialPardonForm test = PresidentialPardonForm("test");
	Bureaucrat test1 = Bureaucrat("test1", 26);
	Bureaucrat test2 = Bureaucrat("test2", 5);
	test2.executeForm(test);
	test1.signForm(test);
	test2.signForm(test);
	test2.executeForm(test);
}

void exe_Robotomy_test()
{
	RobotomyRequestForm test = RobotomyRequestForm("test");
	Bureaucrat test1 = Bureaucrat("test1", 73);
	Bureaucrat test2 = Bureaucrat("test2", 45);
	test2.executeForm(test);
	test1.signForm(test);
	test2.signForm(test);
	test2.executeForm(test);
}

int main()
{
	abstract_test();
	exe_Shrubbery_test();
	exe_Presidential_test();
	exe_Robotomy_test();
	return 0;
}
