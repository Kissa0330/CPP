/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:39:39 by rtakano           #+#    #+#             */
/*   Updated: 2022/12/25 19:13:52 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->name = "null";
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap default constructor is called." << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap default constructor is called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &origin) : ClapTrap(origin)
{
	this->name = origin.name;
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap copy constructor is called." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &origin)
{
	this->name = origin.name;
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap copy assignment operator is called." << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor is called." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "High Fives guys!" << std::endl;
}
