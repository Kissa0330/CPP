/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Humana.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takanoraika <takanoraika@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:47:58 by takanoraika       #+#    #+#             */
/*   Updated: 2022/11/29 18:52:05 by takanoraika      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
{
	this->name = name;
	this->weapon = &weapon;
	std::cout << this->name << " is born." << std::endl;
}

HumanA::~HumanA( void )
{
	std::cout << this->name << " is died." << std::endl;
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanA::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}
