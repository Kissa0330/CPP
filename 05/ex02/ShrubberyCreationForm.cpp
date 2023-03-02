/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 01:29:29 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/02 14:20:09 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm",145,137)
{
	this->target = "null";
	std::cout << "ShrubberyCreationForm constructor is called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm",145,137)
{
	this->target = target;
	std::cout << "ShrubberyCreationForm constructor is called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &origin) : AForm("ShrubberyCreationForm",145,137)
{
	this->target = origin.target;
	std::cout << "ShrubberyCreationForm copy constructor is called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor is called." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &origin)
{
	std::cout << "ShrubberyCreationForm copy operator is called." << std::endl;
	this->target = origin.target;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::ofstream file;

	if (!this->isSigned)
	{
		throw ShrubberyCreationForm::IsSignFalseException();
	}
	if (this->reqExeGrade < executor.getGrade())
	{
		throw ShrubberyCreationForm::GradeTooLowException();
	}
	std::string fileName = this->target + "_shrubbery";
	file.open(fileName.c_str(), std::ios::out);
	file << "a                                 # #### ####" << std::endl;
	file << "s                               ### \\/#|### |/####" << std::endl;
	file << "c                              ##\\/#/ \\||/##/_/##/_#" << std::endl;
	file << "I                            ###  \\/###|/ \\/ # ###" << std::endl;
	file << "I                          ##_\\_#\\_\\## | #/###_/_####" << std::endl;
	file << "                          ## #### # \\ #| /  #### ##/##" << std::endl;
	file << "t                          __#_--###`  |{,###---###-~" << std::endl;
	file << "r                                    \\ }{" << std::endl;
	file << "e                                     }}{" << std::endl;
	file << "e                                     }}{" << std::endl;
	file << "                                 ejm  {{}" << std::endl;
	file << "                                , -=-~{ .-^- _" << std::endl;
	file << "                                      `}" << std::endl;
	file.close();
}
