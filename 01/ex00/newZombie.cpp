/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takanoraika <takanoraika@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:51:46 by takanoraika       #+#    #+#             */
/*   Updated: 2022/11/28 20:34:59 by takanoraika      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *zombie;

	zombie = new Zombie(name);
	return (zombie);
}

void randomChump( std::string name )
{
	Zombie zombie(name);

	zombie.announce();
}
