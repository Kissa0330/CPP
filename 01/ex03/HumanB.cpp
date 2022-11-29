/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takanoraika <takanoraika@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:46:08 by takanoraika       #+#    #+#             */
/*   Updated: 2022/11/29 11:35:47 by takanoraika      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = Weapon("none");
	std::cout << this->name << " is born." << std::endl;
}

HumanB::HumanB(std::string name, Weapon weapon)
{
	this->name = name;
	this->weapon = weapon;
	std::cout << this->name << " is born." << std::endl;
}

HumanB::~HumanB( void )
{
	std::cout << this->name << " is died." << std::endl;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

void HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}
