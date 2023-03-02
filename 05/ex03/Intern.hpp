/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:25:33 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/02 15:42:03 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <string>
#include <iostream>

class Intern
{
public:
	Intern();
	Intern(const Intern &origin);
	~Intern();
	Intern &operator=(const Intern &origin);
	AForm *makeForm(std::string name, std::string target);
};
#endif
