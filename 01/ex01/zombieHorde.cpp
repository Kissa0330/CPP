/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takanoraika <takanoraika@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 20:45:35 by takanoraika       #+#    #+#             */
/*   Updated: 2022/11/28 21:18:29 by takanoraika      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*Zombie_arr;

	Zombie_arr = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		Zombie_arr[i].setName( name );
	}
	return Zombie_arr;
}
