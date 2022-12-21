/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 21:17:43 by rtakano           #+#    #+#             */
/*   Updated: 2022/12/21 15:19:36 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->name = "null";
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap default constructor is called." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap default constructor is called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &origin)
{
	this->name = origin.name;
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap copy constructor is called." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &origin)
{
	this->name = origin.name;
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap copy assignment constructor is called." << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor is called." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->hit_point <= 0)
	{
		std::cout << "ScavTrap " << this->name << " can not attack, because his HP left 0!" << std::endl;
		return;
	}
	if (this->energy_point <= 0)
	{
		std::cout << "ScavTrap " << this->name << " can not attack, because his EP left 0!" << std::endl;
		return;
	}
	this->energy_point --;
	std::cout << "ScavTrap " << this->name << " attacks " << target << " , causing " << this->attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in gatekeeper mode!" << std::endl;
}
