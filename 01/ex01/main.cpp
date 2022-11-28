/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takanoraika <takanoraika@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:49:33 by takanoraika       #+#    #+#             */
/*   Updated: 2022/11/28 21:17:57 by takanoraika      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	Zombie *zombie_pt;

	zombie_pt = zombieHorde(5, "rtakano");
	for (size_t i = 0; i < 5; i++)
	{
		zombie_pt[i].announce();
		zombie_pt[i].~Zombie();
	}
	return 0;
}
