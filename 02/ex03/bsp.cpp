/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 20:25:33 by rtakano           #+#    #+#             */
/*   Updated: 2022/12/18 19:34:54 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float sign(Point p1, Point p2, Point p3)
{
	return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool bl[3];

	bl[0] = sign(point, a, b) > 0;
	bl[1] = sign(point, b, c) > 0;
	bl[2] = sign(point, c, a) > 0;

	return ((bl[0] == bl[1]) && (bl[1] == bl[2]));
}
