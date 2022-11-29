/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takanoraika <takanoraika@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:48:25 by takanoraika       #+#    #+#             */
/*   Updated: 2022/11/29 11:19:54 by takanoraika      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout << this->type << " is created." << std::endl;
}

Weapon::~Weapon( void )
{
	std::cout << this->type << " is destroyed." << std::endl;
}

const std::string& Weapon::getType( void )
{
	return this->type;
}

void Weapon::setType(std::string name)
{
	this->type = type;
}
