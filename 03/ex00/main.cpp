/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:17:24 by rtakano           #+#    #+#             */
/*   Updated: 2022/12/20 21:12:41 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("a");
	ClapTrap b("b");

	for(int i = 0; i < 11; i++)
	{
		a.attack("b");
		b.takeDamage(1);
	}
	b.beRepaired(1);
	ClapTrap c("c");
	for (int i = 0; i < 11; i++)
	{
		c.beRepaired(1);
	}

	ClapTrap a_copy(a);
	ClapTrap b_copy;

	b_copy = b;

	return 0;
}
