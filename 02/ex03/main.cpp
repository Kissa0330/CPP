/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:59:49 by rtakano           #+#    #+#             */
/*   Updated: 2022/12/13 20:29:28 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>
bool bsp( Point const a, Point const b, Point const c, Point const point);


int main(void)
{
	std::cout << bsp(Point(0, 0), Point(1, 1), Point(1, 0), Point(0.5, 0.5)) << std::endl;
	return 0;
}
