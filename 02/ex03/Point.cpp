/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 20:14:09 by rtakano           #+#    #+#             */
/*   Updated: 2022/12/13 20:41:02 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(float x, float y) : x(x), y(y)
{
}

Point::Point(const Point &origin) : x(origin.getX()), y(origin.getY())
{
}

Point::~Point()
{
}

Point &Point::operator=(Point &origin)
{
	return (origin);
}

float Point::getX(void) const
{
	return this->x.toFloat();
}

float Point::getY(void) const
{
	return this->y.toFloat();
}