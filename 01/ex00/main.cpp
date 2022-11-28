/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takanoraika <takanoraika@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:49:33 by takanoraika       #+#    #+#             */
/*   Updated: 2022/11/28 20:35:45 by takanoraika      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	Zombie zombie;
	Zombie *zombie_pt;

	zombie.announce();
	randomChump("Chump");
	zombie_pt = newZombie("newZombie");
	zombie_pt->announce();
	zombie_pt->~Zombie();
	return 0;
}
