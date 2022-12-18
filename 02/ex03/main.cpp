/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:59:49 by rtakano           #+#    #+#             */
/*   Updated: 2022/12/18 19:36:22 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>
bool bsp( Point const a, Point const b, Point const c, Point const point);


int main(void)
{
	if (bsp(Point(0, 0), Point(2, 2), Point(2, 0), Point(-1, -1)))
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}
	return 0;
}
