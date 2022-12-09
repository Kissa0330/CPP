/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:59:42 by rtakano           #+#    #+#             */
/*   Updated: 2022/12/09 18:35:07 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->num = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	this->num = n << Fixed::dot;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n)
{
	this->num = (int)roundf(n * (1 << Fixed::dot));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &origin)
{
	std::cout << "Copy constructor called" << std::endl;
	this->num = origin.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &origin)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->num = origin.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}

int Fixed::getRawBits(void) const
{
	return this->num;
}

void Fixed::setRawBits(int const raw)
{
	this->num = raw;
}

float Fixed::toFloat(void) const
{
	return (float)this->num / (1 << Fixed::dot);
}

int Fixed::toInt(void) const
{
	return this->num >> Fixed::dot;
}
