/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takanoraika <takanoraika@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 09:06:44 by takanoraika       #+#    #+#             */
/*   Updated: 2022/11/30 11:18:06 by takanoraika      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->level[0] = "DEBUG";
	this->level[1] = "INFO";
	this->level[2] = "WARNING";
	this->level[3] = "ERROR";
	this->comment[0] = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
	this->comment[1] = "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!";
	this->comment[2] = "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.";
	this->comment[3] = "This is unacceptable! I want to speak to the manager now.";
	this->func_arr[0] = &Harl::debug;
	this->func_arr[1] = &Harl::info;
	this->func_arr[2] = &Harl::warning;
	this->func_arr[3] = &Harl::error;
	std::cout << "Harl is created." << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl is destroyed." << std::endl;
}

void Harl::debug(void)
{
	std::cout << this->level[0] << ":" << this->comment[0] << std::endl;
}

void Harl::info(void)
{
	std::cout << this->level[1] << ":" << this->comment[1] << std::endl;
}

void Harl::warning(void)
{
	std::cout << this->level[2] << ":" << this->comment[2] << std::endl;
}

void Harl::error(void)
{
	std::cout << this->level[3] << ":" << this->comment[3] << std::endl;
}

void Harl::complain(std::string level)
{
	size_t i;

	i = 0;
	while (i < 4)
	{
		if (this->level[i].compare(level) == 0)
			break;
		i++;
	}
	if (i < 4)
		(this->*func_arr[i])();
}
