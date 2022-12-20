/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:06:42 by rtakano           #+#    #+#             */
/*   Updated: 2022/12/20 17:49:19 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->name = "null";
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
	std::cout << "default constructor is called." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
	std::cout << "default constructor is called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &origin)
{
	this->name = origin.name;
	std::cout << "copy constructor is called." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &origin)
{
	this->name = origin.name;
	std::cout << "copy assignment operator is called." << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "destructor is called." << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->hit_point <= 0)
	{
		std::cout << "ClapTrap " << this->name << " can not attack, because his HP left 0!" << std::endl;
		return;
	}
	if (this->energy_point <= 0)
	{
		std::cout << "ClapTrap " << this->name << " can not attack, because his EP left 0!" << std::endl;
		return;
	}
	this->energy_point --;
	std::cout << "ClapTrap " << this->name << " attacks " << target << " , causing " << this->attack_damage << "points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->hit_point)
	{
		this->hit_point = 0;
	}
	else
	{
		this->hit_point -= amount;
	}
	std::cout << this->name << " is taken " << amount << " damage!" << std::endl;
	if (hit_point == 0)
	{
		std::cout << this->name << " is dead." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_point <= 0)
	{
		std::cout << "ClapTrap " << this->name << " can not be repaired, because his HP left 0!" << std::endl;
		return;
	}
	if (this->energy_point <= 0)
	{
		std::cout << "ClapTrap " << this->name << " can not be repaired, because his EP left 0!" << std::endl;
		return;
	}
	this->energy_point --;
	this->hit_point += amount;
	std::cout << "ClapTrap " << this->name << " is repaired, healing " << amount << " points of HP!" << std::endl;
}

