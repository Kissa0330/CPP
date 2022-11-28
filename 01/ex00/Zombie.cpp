/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takanoraika <takanoraika@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:51:48 by takanoraika       #+#    #+#             */
/*   Updated: 2022/11/28 20:31:04 by takanoraika      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	this->name = "Zombie";
	std::cout << name << " is born." << std::endl;
}

Zombie::Zombie( std::string name )
{
	this->name = name;
	std::cout << name << " is born." << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << this->name << " is destoroy." << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->name << ":BraiiiiiiinnnzzzZ..." << std::endl;
}
