/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:58:04 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/02 15:53:15 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

void create_form_test()
{
	AForm *tests[3];
	Intern test;
	Bureaucrat test1("test1", 1);

	tests[0] = test.makeForm("shrubbery creation", "test");
	tests[1] = test.makeForm("robotomy request", "test");
	tests[2] = test.makeForm("presidential pardon", "test");
	test.makeForm("aaaaaaaaa", "test");
	for (size_t i = 0; i < 3; i++)
	{
		test1.signForm(*tests[i]);
		test1.executeForm(*tests[i]);
		delete tests[i];
	}
	
}

int main()
{
	create_form_test();
	return 0;
}
