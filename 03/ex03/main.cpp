/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:17:24 by rtakano           #+#    #+#             */
/*   Updated: 2022/12/25 19:35:34 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap a("rtakano");
    DiamondTrap b(a);

	// a.whoAmI();
    // b.whoAmI();
    a.attack("someone");
    std::cout << a << std::endl;
	return 0;
}
